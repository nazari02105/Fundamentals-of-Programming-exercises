//#include <stdio.h>
#include <stdarg.h>
#include "grader.h"


#define calc(a, b, op) ((a) op (b))








#if s == 0
    long long int findDivisorSum (char x0, int x1, int x2, int x3)
    {
        if (x0 == 'M'){
            int maxCount = 0;
            int this_number_count = 0;
            int this_number_count2 = 0;
            int this_number_count3 = 0;
            for (int aa1 = 1; aa1*aa1 <= x1; ++aa1){
                //if (x1%aa1 == 0){
                //    this_number_count += aa1;
                //}
                if(aa1 * aa1 == x1){
                    this_number_count += aa1;
                }
                else if (x1%aa1 == 0){
                    this_number_count += aa1;
                    this_number_count += x1/aa1;
                }
            }
            if (this_number_count > maxCount){
                maxCount = this_number_count;
            }
            for (int aa2 = 1; aa2*aa2 <= x2; ++aa2){
                //if (x2%aa2 == 0){
                //    this_number_count2 += aa2;
                //}
                if(aa2 * aa2 == x2){
                    this_number_count2 += aa2;
                }
                else if (x2%aa2 == 0){
                    this_number_count2 += aa2;
                    this_number_count2 += x2/aa2;
                }
            }
            if (this_number_count2 > maxCount){
                maxCount = this_number_count2;
            }
            for (int aa3 = 1; aa3*aa3 <= x3; ++aa3){
                //if (x3%aa3 == 0){
                //    this_number_count3 += aa3;
                //}
                if(aa3 * aa3 == x3){
                    this_number_count3 += aa3;
                }
                else if (x3%aa3 == 0){
                    this_number_count3 += aa3;
                    this_number_count3 += x3/aa3;
                }
            }
            if (this_number_count3 > maxCount){
                maxCount = this_number_count3;
            }
            return maxCount;
        }








        if (x0 == 'm'){
            int minCount = 999999999;
            int this_number_count4 = 0;
            int this_number_count5 = 0;
            int this_number_count6 = 0;
            for (int aa4 = 1; aa4*aa4 <= x1; ++aa4){
                //if (x1%aa4 == 0){
                    //this_number_count4 += aa4;
                //}
                if(aa4 * aa4 == x1){
                    this_number_count4 += aa4;
                }
                else if (x1%aa4 == 0){
                    this_number_count4 += aa4;
                    this_number_count4 += x1/aa4;
                }
            }
            if (this_number_count4 < minCount){
                minCount = this_number_count4;
            }
            for (int aa5 = 1; aa5*aa5 <= x2; ++aa5){
                //if (x2%aa5 == 0){
                //    this_number_count5 += aa5;
                //}
                if(aa5 * aa5 == x2){
                    this_number_count5 += aa5;
                }
                else if (x2%aa5 == 0){
                    this_number_count5 += aa5;
                    this_number_count5 += x2/aa5;
                }
            }
            if (this_number_count5 < minCount){
                minCount = this_number_count5;
            }
            for (int aa6 = 1; aa6*aa6 <= x3; ++aa6){
                //if (x3%aa6 == 0){
                //    this_number_count6 += aa6;
                //}
                if(aa6 * aa6 == x3){
                    this_number_count6 += aa6;
                }
                else if (x3%aa6 == 0){
                    this_number_count6 += aa6;
                    this_number_count6 += x3/aa6;
                }
            }
            if (this_number_count6 < minCount){
                minCount = this_number_count6;
            }
            return minCount;
        }
    }
#endif // s










#if s>0
    long long int findDivisorSum (int arg_count, ...)
    {
        va_list ap;
        va_start(ap, arg_count);
        int minCount2 = 100000;
        for (int m = 1; m<=arg_count; ++m){
            int counter3 = 0;
            int numbers_in_the_order = va_arg(ap, int);
            for (int n = 1; n<=numbers_in_the_order; ++n){
                if(numbers_in_the_order%n == 0){
                    counter3 += n;
                }
            }
            if (counter3 < minCount2){
                minCount2 = counter3;
            }
        }
        va_end(ap);
        return minCount2;
    }
#endif // s









long long run(char type, int num1, int num2, int num3, int num4) {
    return findDivisorSum(type,
    calc(num1, num2, +),
    calc(num1, num2, -),
    calc(num3, num4, *));
}




