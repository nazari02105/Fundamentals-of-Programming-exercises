#include <stdio.h>

int result (long long int entery);
int number_of_digits (long long int x);





int main()
{
    int rounds;
    scanf("%d", &rounds);
    for (int i = 1; i<=rounds; ++i){
        long long int number;
        scanf("%lld", &number);
        int end_of_game = result(number);
        printf("%d\n", end_of_game);
    }
    return 0;
}





//---------------------------------------------------------------
int result (long long int entery)
{
    long long int entery2 = entery;
    int digit;
    int count2 = number_of_digits(entery);
    if (count2 == 1){
        if (entery2%2==0){
            return 2;
        }
        else{
            return 1;
        }
    }
    else if (count2%2==1){
        for (int j = 1; j<=count2; ++j){
            if (j%2 == 1){
                digit = entery2%10;
                entery2 /= 10;
                if (digit % 2 == 1){
                    return 1;
                }
            }
            else{
                entery2 /= 10;
            }
        }
        return 2;
    }
    else if (count2%2==0){
        for (int k = 1; k<=count2; ++k){
            if (k%2 == 1){
                digit = entery2%10;
                entery2 /= 10;
                if (digit %2 == 0){
                    return 2;
                }
            }
            else{
                entery2 /= 10;
            }
        }
        return 1;
    }
}





//----------------------------------------------------------------
int number_of_digits (long long int x)
{
    if (x == 0){
        return 1;
    }
    else{
        int count = 0;
        while (x>0){
            count += 1;
            x /= 10;
        }
        return count;
    }
}


