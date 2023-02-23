#include <stdio.h>

int etminan3 = 0;
int etminan2 = 0;
int etminan = 0;
int eshtebah = 0;
int counter = 1;
int us = 0;
int him = 1;
int vasateshTamamSHeh = 1;
int whoWins (void);



int main()
{
    whoWins();
    if (vasateshTamamSHeh == 1 && eshtebah == 0){
        if (eshtebah > 0){
            printf("%d. NO", counter);
        }
        //if (us >= him && eshtebah == 0){
        //    printf("%d. YES", counter);
        //}
        if (him > us && eshtebah == 0){
            printf("%d. NO", counter);
        }
    }
    if (vasateshTamamSHeh > 1 || eshtebah > 0){
        if (eshtebah > 0){
            //vasateshTamamSHeh += 1;
            printf("%d. NO", vasateshTamamSHeh);
        }
        //vasateshTamamSHeh -= 1;
        vasateshTamamSHeh -= 1;
        if (eshtebah == 0){
            printf("%d. YES", vasateshTamamSHeh);
        }
        //if (him > us && eshtebah == 0){
            //vasateshTamamSHeh += 1;
        //    printf("%d. NO", vasateshTamamSHeh);
        //}
    }
    //if (vasateshTamamSHeh > 1){
    //    printf("%d. YES", vasateshTamamSHeh);
    //}
    return 0;

}





int whoWins (void)
{

    char x;
    scanf("%c", &x);
    counter += 1;
    if (us == him &&etminan3 == 0){
        vasateshTamamSHeh = counter;
        etminan2 += 1;
    }
    if (x == 'a'){
        him += 1;
    }
    if (x == 'b'){
        us += 1;
        etminan += 1;
    }
    if (etminan > 0 && x == 'a'){
        if (etminan2 == 0){
            eshtebah += 1;
            vasateshTamamSHeh = counter;
            etminan3 += 1;
        }
    }
    if (x == 'c' || etminan2 == 1 || etminan3 == 1){
        return;
    }
    if (x == 'a' || x == 'b'){
        whoWins();
    }
}
