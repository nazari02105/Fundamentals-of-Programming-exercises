#include <stdio.h>

int check (long long int a, long long int b);





int main()
{
    int x,y,t;
    scanf("%d", &t);
    while(t > 0){
        scanf("%d%d", &x, &y);
        if (check(x,y)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        t -= 1;
    }
    return 0;
}




int check (long long int a, long long int b)
{
    if (a > b){
        return 1;
    }
    int count = 0;
    while(a<b){
        if (count == 1000){
            return 0;
        }
        else if (a == 1){
            count += 1;
            return 0;
        }
        else if (a%2 == 1){
            count += 1;
            a = a - 1;
        }
        else if (a%2 == 0){
            count += 1;
            a = (int)((float)a * 1.5);
        }
    }
    if (a >= b){
        return 1;
    }
}





