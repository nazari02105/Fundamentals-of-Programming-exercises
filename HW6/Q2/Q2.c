#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int mabna;
    scanf("%d", &mabna);
    char* my_calloc_ptr = (char*)calloc(100000000, sizeof(char));
    getchar();
    scanf("%s", my_calloc_ptr);
    getchar();
    char* my_calloc_ptr_2 = (char*)calloc(100000000, sizeof(char));
    scanf("%s", my_calloc_ptr_2);
    char* my_calloc_ptr_3 = (char*)calloc(100000000, sizeof(char));
    long long int difference;
    if (strlen(my_calloc_ptr) > strlen(my_calloc_ptr_2)){
        difference = strlen(my_calloc_ptr) - strlen(my_calloc_ptr_2);
    }
    else{
        difference = strlen(my_calloc_ptr_2) - strlen(my_calloc_ptr);
    }






    int reminder = 0;
    long long int final_result = 0;
    if (strlen(my_calloc_ptr) >= strlen(my_calloc_ptr_2)){
        long long int rounds = strlen(my_calloc_ptr)-1;
        //long long int final_result = 0;
        //int reminder = 0;
        while (rounds >= 0){
            int smaller_digit;
            if (rounds-difference >=0){
                smaller_digit = (((int)*(my_calloc_ptr_2+rounds-difference))-48);
            }
            else{
                smaller_digit = 0;
            }
            int sum = (((int)*(my_calloc_ptr+rounds))-48) + smaller_digit + reminder;
            reminder = sum/mabna;
            *(my_calloc_ptr_3+final_result) = (char)(sum%mabna);
            final_result += 1;
            rounds -= 1;
        }
    }


    if (strlen(my_calloc_ptr) < strlen(my_calloc_ptr_2)){
        long long int rounds = strlen(my_calloc_ptr_2)-1;
        //long long int final_result = 0;
        //int reminder = 0;
        while (rounds >= 0){
            int smaller_digit;
            if (rounds-difference >=0){
                smaller_digit = (((int)*(my_calloc_ptr+rounds-difference))-48);
            }
            else{
                smaller_digit = 0;
            }
            int sum = (((int)*(my_calloc_ptr_2+rounds))-48) + smaller_digit + reminder;
            reminder = sum/mabna;
            *(my_calloc_ptr_3+final_result) = (char)(sum%mabna);
            final_result += 1;
            rounds -= 1;
        }
    }




    if (strlen(my_calloc_ptr) >= strlen(my_calloc_ptr_2)){
        if (reminder > 0){
            *(my_calloc_ptr_3+final_result) = (char)(reminder);
            for (long long int k = strlen(my_calloc_ptr); k>=0; --k){
                printf("%d", *(my_calloc_ptr_3 + k));
            }
        }
        else{
            for (long long int k = strlen(my_calloc_ptr)-1; k>=0; --k){
                printf("%d", *(my_calloc_ptr_3 + k));
            }
        }
    }


    if (strlen(my_calloc_ptr) < strlen(my_calloc_ptr_2)){
        if (reminder > 0){
            *(my_calloc_ptr_3+final_result) = (char)(reminder);
            for (long long int k = strlen(my_calloc_ptr_2); k>=0; --k){
                printf("%d", *(my_calloc_ptr_3 + k));
            }
        }
        else{
            for (long long int k = strlen(my_calloc_ptr_2)-1; k>=0; --k){
                printf("%d", *(my_calloc_ptr_3 + k));
            }
        }
    }

}



