#include <stdio.h>

int adad_shansi (long long int x);
int nesbatan_shansi (long long int a);


int main (void)
{
    int tedad;
    scanf("%d", &tedad);
    for (int j = 1; j<=tedad; ++j){
        long long int z;
        scanf("%d", &z);
        if (nesbatan_shansi(z) == 1){
            printf("YES\n");
        }
        if (nesbatan_shansi(z) == 0){
            printf("NO\n");
        }
    }
    return 0;
}






int adad_shansi (long long int x)
{
    while (x != 0){
        int y = x % 10;
        if (y != 4 && y != 7){
            return 0;
        }
        x = x / 10;
    }
    return 1;
}




int nesbatan_shansi (long long int a)
{
    for (int i = 1; i<=a; ++i){
        if (a % i == 0){
            if (adad_shansi(i)){
                return 1;
            }
        }
    }
    return 0;
}
