#include <stdio.h>

int main()
{
    long long int a, b, c, d, max;
    scanf("%lld %lld", &a, &b);
    scanf("%lld %lld", &c, &d);
    long long int x1 = a*d, x2 = a*c, x3 = b*c, x4 = b*d;
    /*if (x1 >= x2 && x1 >= x3 && x1 >= x4 && x1 != 0){
            printf("%lld", x1);
    }
    if (x2 >= x1 && x2 >= x3 && x2 >= x4 && x2 != 0){
            printf("%lld", x2);
    }
    if (x3 >= x2 && x3 >= x1 && x3 >= x4 && x3 != 0){
            printf("%lld", x3);
    }
    if (x4 >= x2 && x4 >= x3 && x4 >= x1 && x4 != 0){
            printf("%lld", x4);
    }*/
    max = x1;
    if (x2 > max){
        max = x2;
    }
    if (x3 > max){
        max = x3;
    }
    if (x4 > max){
        max = x4;
    }
    printf("%lld",max);
    }
