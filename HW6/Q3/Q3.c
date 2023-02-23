#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int* left_number = (long long int*)calloc(10000, sizeof(long long int));
    long long int* right_number = (long long int*)calloc(10000, sizeof(long long int));
    long long int* right_number_2 = (long long int*)calloc(10000, sizeof(long long int));
    long long int everytime_number = 0;
    int which_one = 0;
    long long int i = 0;
    long long int j = 0;
    while(everytime_number != -1){
        if (which_one == 0){
            scanf("%lld", &everytime_number);
            if (everytime_number == -1){
                break;
            }
            *(left_number+i) = everytime_number;
            i += 1;
            which_one = 1;
        }
        if (which_one == 1){
            scanf("%lld", &everytime_number);
            if (everytime_number == -1){
                break;
            }
            *(right_number+j) = everytime_number;
            *(right_number_2+j) = everytime_number;
            j += 1;
            which_one = 0;
        }
    }


    for (long long int k1 = 0; k1<j-1; ++k1){
        for (long long int k2 = 0; k2<j-1; ++k2){
            if (*(right_number_2+k2) > *(right_number_2+k2+1)){
                long long int help = *(right_number_2+k2+1);
                *(right_number_2+k2+1) = *(right_number_2+k2);
                *(right_number_2+k2) = help;
            }
        }
    }

    long long int unique_index = 0;
    *(right_number_2+j) = 99999;
    for (long long int k3 = 0; k3<j; ++k3){
        if (*(right_number_2+k3) < *(right_number_2+(k3+1))){
            unique_index = *(right_number_2+k3);
            break;
        }
        else{
            long long int must_delete = *(right_number_2+k3);
            long long int k4 = k3;
            while (*(right_number_2+k4) == must_delete){
                *(right_number_2+k4) = 100000;
                k4 += 1;
            }
        }
    }


    long long int loving_index;
    if (unique_index == 0){
        printf("no one won.");
    }
    else{
        for (long long int k5 = 0; k5<j; ++k5){
            if (*(right_number+k5) == unique_index){
                loving_index = k5;
            }
        }
        long long int loving_value = *(left_number+loving_index);
        long long int etminan = 0;
        for (long long int k6 = 0; k6<i; ++k6){
            if (*(left_number+k6) == loving_value){
                etminan += 1;
            }
        }
        if (etminan > 1){
            printf("%lld cheated.", *(left_number+loving_index));
        }
        if (etminan == 1){
            printf("%lld won.", *(left_number+loving_index));
        }
    }





    return 0;
}
