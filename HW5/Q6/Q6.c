#include <stdio.h>


int main()
{
    int rounds;
    scanf("%d", &rounds);
    long long int coins[rounds];
    for (int i = 0; i<rounds; ++i){
        long long int this_match;
        scanf("%lld", &this_match);
        coins[i] = this_match;
    }
    long long int sum;
    for (int j = 0; j<rounds; ++j){
        sum = 0;
        int sam_or_ork = 0;
        while (coins[j] > 0){
            if (coins[j] % 2 == 1 && sam_or_ork == 0){
                sum += 1;
                coins[j] -= 1;
                sam_or_ork = 1;
            }
            //--
            if (coins[j] == 4 && sam_or_ork == 0){
                sum += 2;
                coins[j] -= 2;
                sam_or_ork = 1;
            }
            //--
            if (coins[j] %2 == 0 && sam_or_ork == 0 && (coins[j]/2)%2 == 0){
                sum += 1;
                coins[j] -= 1;
                sam_or_ork = 1;
            }
            if (coins[j] %2 == 0 && sam_or_ork == 0 && (coins[j]/2)%2 == 1){
                sum += coins[j]/2;
                coins[j] /= 2;
                sam_or_ork = 1;
            }
            if (coins[j] % 2 == 1 && sam_or_ork == 1){
                coins[j] -= 1;
                sam_or_ork = 0;
            }
            //--
            if (coins[j] == 4 && sam_or_ork == 1){
                coins[j] -= 2;
                sam_or_ork = 0;
            }
            //--
            if (coins[j] %2 == 0 && sam_or_ork == 1 && (coins[j]/2)%2 == 0){
                coins[j] -= 1;
                sam_or_ork = 0;
            }
            if (coins[j] %2 == 0 && sam_or_ork == 1 && (coins[j]/2)%2 == 1){
                coins[j] /= 2;
                sam_or_ork = 0;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
