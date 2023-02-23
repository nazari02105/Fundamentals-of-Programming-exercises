#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    void* my_array = malloc(1000000);
    int* address = (int*)malloc(1000000);
    char* type = malloc(1000000);
    long long int my_address_storage = 0;
    long long int my_array_storage = 0;
    long long int my_type_storage = 0;
    char* statement = malloc(100);
    while(true){
        gets(statement);
        if (*(statement+0) == 'i'){
            //realloc(my_array, my_array_storage+4);
            scanf("%d", (int*)my_array+my_array_storage);
            //realloc(address, my_address_storage+4);
            *(address + my_address_storage) = my_array_storage;
            //realloc(type, my_type_storage+1);
            *(type+my_type_storage) = 'i';
            my_type_storage += 1;
            //printf("Integer %d added to index %d\n", *((int*)my_array+my_array_storage), my_address_storage/4);
            printf("Integer %d added to index %d\n", *((int*)my_array+my_array_storage), my_address_storage/4);
            my_array_storage += 4;
            my_address_storage += 4;
        }
        if (*(statement+0) == 'f'){
            //realloc(my_array, my_array_storage+4);
            scanf("%lf", (double*)my_array+my_array_storage);
            //realloc(address, my_address_storage+4);
            *(address + my_address_storage) = my_array_storage;
            //realloc(type, my_type_storage+1);
            *(type+my_type_storage) = 'f';
            my_type_storage += 1;
            printf("Float %lf added to index %d\n", *((double*)my_array+my_array_storage), my_address_storage/4);
            my_address_storage += 4;
            my_array_storage += 8;
        }
        if (*(statement+0) == 'c'){
            //getchar();
            //
            //realloc(my_array, my_array_storage+1);
            scanf("%c", (char*)my_array+my_array_storage);
            //realloc(address, my_address_storage+4);
            *(address + my_address_storage) = my_array_storage;
            //realloc(type, my_type_storage+1);
            *(type+my_type_storage) = 'c';
            my_type_storage += 1;
            printf("Character %c added to index %d\n", *((char*)my_array+my_array_storage), my_address_storage/4);
            my_address_storage += 4;
            //
            my_array_storage += 1;
        }
        if (*(statement+0) == 'b'){
            //realloc(my_array, my_array_storage+4);
            scanf("%d", (int*)my_array+my_array_storage);
            //realloc(address, my_address_storage+4);
            *(address + my_address_storage) = my_array_storage;
            //realloc(type, my_type_storage+1);
            *(type+my_type_storage) = 'b';
            my_type_storage += 1;
            if (*((int*)my_array+my_array_storage) == 1){
                printf("Boolean %s added to index %d\n", "True", my_address_storage/4);
            }
            if (*((int*)my_array+my_array_storage) == 0){
                printf("Boolean %s added to index %d\n", "False", my_address_storage/4);
            }
            my_address_storage += 4;
            my_array_storage += 4;
        }
        if ((*statement+0) == 'a'){
            long long int index;
            scanf("%lld", &index);
            if (index < my_address_storage/4 && index >= 0){
                char access_char = *(type+index);
                if (access_char == 'i'){
                    printf("Integer ");
                    printf("%d ", *((int*) my_array + *(address + index*4)));
                    printf("is in index %d\n", index);
                }
                if (access_char == 'f'){
                    printf("Float ");
                    printf("%lf ", *((double*) my_array + *(address + index*4)));
                    printf("is in index %d\n", index);
                }
                if (access_char == 'c'){
                    printf("Character ");
                    printf("%c ", *((char*) my_array + *(address + index*4)));
                    printf("is in index %d\n", index);
                }
                if (access_char == 'b'){
                    printf("Boolean ");
                    int which_bool = *((int*) my_array + *(address + index*4));
                    if (which_bool == 1){
                        printf("True is in index %d\n", index);
                    }
                    if (which_bool == 0){
                        printf("False is in index %d\n", index);
                    }
                }
            }
            else{
                printf("Out of Boundaries\n");
            }
        }
        if((*statement+0) == 'p'){
            if (my_address_storage == 0){
                printf("Nothing Exists...\n");
            }
            else{
                for(long long int k = 0; k<my_type_storage; ++k){
                    printf("%d: ", k);
                    if (*(type+k) == 'i'){
                        printf("Integer - %d\n", *((int*)my_array+(*(address+k*4))));
                    }
                    if (*(type+k) == 'f'){
                        printf("Float - %lf\n", *((double*)my_array+(*(address+k*4))));
                    }
                    if (*(type+k) == 'c'){
                        printf("Character - %c\n", *((char*)my_array+(*(address+k*4))));
                    }
                    if (*(type+k) == 'b'){
                        if (*((int*)my_array+(*(address+k*4))) == 1){
                            printf("Boolean - True\n");
                        }
                        else{
                            printf("Boolean - False\n");
                        }
                    }
                }
            }
        }
        if ((*statement+0) == 'e'){
            void free(my_array);
            void free(address);
            void free(type);
            my_address_storage = 0;
            my_type_storage = 0;
            my_array_storage = 0;
            printf("All Data Has Been Cleared...\n");
        }
        if ((*statement+0) == 'o'){
            break;
        }
        void free(statement);
    }
}

