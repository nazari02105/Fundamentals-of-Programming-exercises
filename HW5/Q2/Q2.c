#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    int my_array[n][n];
    for (int line = 0; line<n; ++line){
        for (int col = 0; col<n; ++col){
            int each_place;
            scanf("%d", &each_place);
            my_array[line][col] = each_place;
        }
    }
    if (n % 2 == 0){
        printf("%d ", my_array[0][0]);
        int satr = 0;
        int soton = 0;
        int counter = 0;
        while (satr != n-1 || soton != 0){
            if (satr == 0 && soton != n-1){
                soton += 1;
                printf("%d ", my_array[0][soton]);
                counter += 1;
            }
            while (soton != 0){
                soton -= 1;
                satr += 1;
                printf("%d ", my_array[satr][soton]);
                counter += 1;
            }
            if (soton == 0 && satr != n-1){
                satr += 1;
                printf("%d ", my_array[satr][0]);
                counter += 1;
            }
            if (satr == n-1 && soton == 0){
                break;
            }
            while (satr != 0){
                soton += 1;
                satr -= 1;
                printf("%d ", my_array[satr][soton]);
                counter += 1;
            }
        }

        satr = n-1;
        soton = 0;


        while (counter != n*n){
            if(satr == n-1 && soton != n-1){
                soton += 1;
                printf("%d ", my_array[n-1][soton]);
            }
            while (soton != n-1){
                soton += 1;
                satr -= 1;
                printf("%d ", my_array[satr][soton]);
            }
            if (soton == n-1 && satr != n-1){
                satr += 1;
                printf("%d ", my_array[satr][n-1]);
            }
            while (satr != n-1){
                soton -= 1;
                satr += 1;
                printf("%d ", my_array[satr][soton]);
            }
            if (satr == n-1 && soton == n-1){
                break;
            }
        }
    }


    if (n % 2 == 1){
        printf("%d ", my_array[0][0]);
        int satr = 0;
        int soton = 0;
        int counter = 0;
        while (satr != n-1 || soton != 0){
            if (satr == 0 && soton == n-1){
                break;
            }
            if (satr == 0 && soton != n-1){
                soton += 1;
                printf("%d ", my_array[0][soton]);
                counter += 1;
            }
            while (soton != 0){
                soton -= 1;
                satr += 1;
                printf("%d ", my_array[satr][soton]);
                counter += 1;
            }
            if (soton == 0 && satr != n-1){
                satr += 1;
                printf("%d ", my_array[satr][0]);
                counter += 1;
            }
            while (satr != 0){
                soton += 1;
                satr -= 1;
                printf("%d ", my_array[satr][soton]);
                counter += 1;
            }
        }

        satr = 0;
        soton = n-1;

        while (counter != n*n){
            if(soton == n-1 && satr != n-1){
                satr += 1;
                printf("%d ", my_array[satr][n-1]);
            }
            while (satr != n-1){
                soton -= 1;
                satr += 1;
                printf("%d ", my_array[satr][soton]);
            }
            if (satr == n-1 && soton != n-1){
                soton += 1;
                printf("%d ", my_array[n-1][soton]);
            }
            if (satr == n-1 && soton == n-1){
                break;
            }
            while (soton != n-1){
                soton += 1;
                satr -= 1;
                printf("%d ", my_array[satr][soton]);
            }
        }

    }


    return 0;
}
