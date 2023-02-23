#include <stdio.h>

long long int numberOfLines1(long long int x1);
long long int numberOfLines2(long long int x2);






int main()
{
    long long int numberOfDatabases;
    scanf("%lld", &numberOfDatabases);
    if (numberOfDatabases < 500){
        printf("%lld", numberOfLines1(numberOfDatabases));
    }
    else if (numberOfDatabases >= 500){
        printf("%lld", numberOfLines2(numberOfDatabases));
    }
    return 0;
}






long long int numberOfLines1(long long int x1)
{
    if (x1 == 0){
        return 0;
    }
    else if (x1 == 1){
        return 1;
    }
    else if (1 < x1 < 500){
        return numberOfLines1(x1/2) + numberOfLines1(x1/3) + (x1*x1);

    }
}



long long int numberOfLines2 (long long int x2)
{
    if (x2 == 0){
        return 0;
    }
    else if (x2 == 1){
        return 1;
    }
    else{
        return numberOfLines2(x2/2) + numberOfLines2(x2/3) + (2*x2*x2);
    }
}










