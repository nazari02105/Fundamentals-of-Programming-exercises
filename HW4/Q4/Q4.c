#include <stdio.h>


void printingSeven (int numberOfSevens);



int main()
{
    int x;
    scanf("%d", &x);
    printingSeven(x);
    return 0;
}





void printingSeven (int numberOfSevens)
{
    int spaces = (numberOfSevens*2) - 2;
    for (int i = 1; i<=(numberOfSevens*2); ++i){
        printf("*");
    }
    printf("\n");
    for (int j = 1; j <= (numberOfSevens*2) - 1; ++j){
        for (int k = 1; k <= spaces; ++k){
            printf(" ");
        }
        spaces -= 1;
        printf("*\n");
    }
    if (numberOfSevens == 0){
        return;
    }
    if (numberOfSevens > 0){
        return printingSeven(numberOfSevens - 1);
    }

}
