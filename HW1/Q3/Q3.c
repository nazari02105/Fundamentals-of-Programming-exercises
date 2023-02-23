#include <stdio.h>

int main (void)
{
    int a11;
    int a12;
    int a13;
    int a21;
    int a22;
    int a23;
    int a31;
    int a32;
    int a33;
    scanf("%d%d%d",&a11,&a12,&a13);
    scanf("%d%d%d",&a21,&a22,&a23);
    scanf("%d%d%d",&a31,&a32,&a33);
    printf("%d",(a11*((a22*a33)+((~(a23*a32))+1))+((((~a12)+1)*(a21*a33+((~(a31*a23))+1))))+(a13*((a21*a32)+((~(a31*a22))+1)))));
    return 0;
}
