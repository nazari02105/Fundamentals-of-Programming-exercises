#include <stdio.h>


double pow (double x, int y);
double exactCordinate (double a1, double b1, double c1, double d1, double e1, double f1, double m1, double n1);
double exactCordinate2 (double a1, double b1, double c1, double d1, double e1, double f1, double m1, double n1);
int counter = 0;


int main()
{
    double a, b, c, d, e, f;
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    double m, n;
    scanf("%lf %lf", &m, &n);
    if (a*pow(m, 5) + b*pow(m, 4) + c*pow(m, 3) + d*pow(m, 2) + e*m + f > 0 && a*pow(n, 5) + b*pow(n, 4) + c*pow(n, 3) + d*pow(n, 2) + e*n + f > 0){
        printf("NOT POSSIBLE!");
    }
    else if (a*pow(m, 5) + b*pow(m, 4) + c*pow(m, 3) + d*pow(m, 2) + e*m + f < 0 && a*pow(n, 5) + b*pow(n, 4) + c*pow(n, 3) + d*pow(n, 2) + e*n + f < 0){
        printf("NOT POSSIBLE!");
    }
    else{
        printf("%lf", exactCordinate(a, b, c, d, e, f, m, n));
    }
    return 0;
}




//--------------------------------------------------------------------------------------------
double pow (double x, int y)
{
    int count = 1;
    double result = 1;
    for (int i = 1; i<=y; ++i){
        result *= x;
    }
    return result;
}
//----------------------------------------------------------------------------------------------



//------------------------------------------------------------------------------------------------
double exactCordinate (double a1, double b1, double c1, double d1, double e1, double f1, double m1, double n1)
{
    //printf("%d\n", counter);
    if (a1*pow((m1+n1)/2, 5) + b1*pow((m1+n1)/2, 4) + c1*pow((m1+n1)/2, 3) + d1*pow((m1+n1)/2, 2) + e1*((m1+n1)/2) + f1 == 0){
        return (m1+n1)/2;
    }
    /*if (counter == 24){
        //return (int)(m1+n1)/2;
        if (a1*pow((int)(m1+n1)/2, 5) + b1*pow((int)(m1+n1)/2, 4) + c1*pow((int)(m1+n1)/2, 3) + d1*pow((int)(m1+n1)/2, 2) + e1*((int)(m1+n1)/2) + f1 == 0){
            return (int)(m1+n1)/2;
        }
        if (a1*pow((int)(m1+n1)/2 + 1, 5) + b1*pow((int)(m1+n1)/2 + 1, 4) + c1*pow((int)(m1+n1)/2 + 1, 3) + d1*pow((int)(m1+n1)/2 + 1, 2) + e1*((int)(m1+n1)/2 + 1) + f1 == 0){
            return (int)(m1+n1)/2 + 1;
        }
    }*/
    else if (a1*pow((m1+n1)/2, 5) + b1*pow((m1+n1)/2, 4) + c1*pow((m1+n1)/2, 3) + d1*pow((m1+n1)/2, 2) + e1*((m1+n1)/2) + f1 > 0 && a1*pow(m1, 5) + b1*pow(m1, 4) + c1*pow(m1, 3) + d1*pow(m1, 2) + e1*m1 + f1 < 0){
        counter += 1;
        return exactCordinate(a1, b1, c1, d1, e1, f1, (m1+n1)/2, m1);
    }
    else if (a1*pow((m1+n1)/2, 5) + b1*pow((m1+n1)/2, 4) + c1*pow((m1+n1)/2, 3) + d1*pow((m1+n1)/2, 2) + e1*((m1+n1)/2) + f1 < 0 && a1*pow(m1, 5) + b1*pow(m1, 4) + c1*pow(m1, 3) + d1*pow(m1, 2) + e1*m1 + f1 > 0){
        counter += 1;
        return exactCordinate(a1, b1, c1, d1, e1, f1, (m1+n1)/2, m1);
    }
    else if (a1*pow((m1+n1)/2, 5) + b1*pow((m1+n1)/2, 4) + c1*pow((m1+n1)/2, 3) + d1*pow((m1+n1)/2, 2) + e1*((m1+n1)/2) + f1 > 0 && a1*pow(n1, 5) + b1*pow(n1, 4) + c1*pow(n1, 3) + d1*pow(n1, 2) + e1*n1 + f1 < 0){
        counter += 1;
        return exactCordinate(a1, b1, c1, d1, e1, f1, (m1+n1)/2, n1);
    }
    else if (a1*pow((m1+n1)/2, 5) + b1*pow((m1+n1)/2, 4) + c1*pow((m1+n1)/2, 3) + d1*pow((m1+n1)/2, 2) + e1*((m1+n1)/2) + f1 < 0 && a1*pow(n1, 5) + b1*pow(n1, 4) + c1*pow(n1, 3) + d1*pow(n1, 2) + e1*n1 + f1 > 0){
        counter += 1;
        return exactCordinate(a1, b1, c1, d1, e1, f1, (m1+n1)/2, n1);
    }
}
//--------------------------------------------------------------------------------------------------------
