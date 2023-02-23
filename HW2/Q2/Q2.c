#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    for (int i = 1; i<=number; ++i){
        int telepat = 0, destination = 0;
        scanf("%d %d", &telepat, &destination);
        int cte_start = 0, cte_end = 100;
        int count = 0;
        int count2 = 0;
        for (int j = 0; j<telepat; ++j){
            int start, end;
            scanf("%d %d", &start, &end);
            if (start >= cte_start && start <= cte_end){
                if (end <= cte_end && count2 > 0){
                    int xyz;
                }
                else{
                    cte_start = start;
                    cte_end = end;
                }
            }
            if (cte_start <= destination && destination <= cte_end){
                count = count + 1;
            }
            count2 = count2 + 1;
        }
        if (count > 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
