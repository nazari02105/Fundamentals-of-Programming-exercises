#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int row, column, threeD;
    scanf("%d %d %d\n", &row, &column, &threeD);
    int everytime_row = threeD;
    //getchar();
    threeD += 1;
    long long int max_index = row*column*threeD;
    int counter = 1;
    //creatig 3D array
    int*** my_3D_array = calloc(row, sizeof(int **));
    for (int i1 = 0; i1<row; ++i1){
        *(my_3D_array+i1) = calloc(column, sizeof(int *));
        for (int i2 = 0; i2<column; ++i2){
            *(*(my_3D_array+i1)+i2) = calloc(threeD, sizeof(int));
            int first_time = 0;
            int this_time_row = 1;
            for (int i3 = 0; i3<threeD; ++i3){
                if(first_time == 0){
                    char T_or_F;
                    scanf("%c\n", &T_or_F);
                    counter += 1;
                    //
                    //getchar();
                    //
                    *(*(*(my_3D_array+i1)+i2)+i3) = T_or_F;
                    first_time += 1;
                }
                else{
                    if ((*(*(*(my_3D_array+i1)+i2)+0)) == 84){
                        if (counter == max_index){
                            int numbers;
                            scanf("%d", &numbers);
                            counter += 1;
                            //
                            //getchar();
                            //
                            *(*(*(my_3D_array+i1)+i2)+i3) = numbers;
                            break;
                        }
                        if (this_time_row == everytime_row){
                            int numbers;
                            scanf("%d\n", &numbers);
                            counter += 1;
                            //
                            //getchar();
                            //
                            *(*(*(my_3D_array+i1)+i2)+i3) = numbers;
                        }
                        else{
                            int numbers;
                            scanf("%d ", &numbers);
                            counter += 1;
                            //
                            //getchar();
                            //
                            *(*(*(my_3D_array+i1)+i2)+i3) = numbers;
                        }
                    }
                    if ((*(*(*(my_3D_array+i1)+i2)+0)) == 70){
                        if (counter == max_index){
                            char chars;
                            scanf("%c", &chars);
                            counter += 1;
                            //
                            //getchar();
                            //
                            *(*(*(my_3D_array+i1)+i2)+i3) = chars;
                            break;
                        }
                        if (this_time_row == everytime_row){
                            //getchar();
                            char chars;
                            scanf("%c\n", &chars);
                            counter += 1;
                            //
                            //getchar();
                            //
                            *(*(*(my_3D_array+i1)+i2)+i3) = chars;
                        }
                        else{
                            //getchar();
                            char chars;
                            scanf("%c ", &chars);
                            counter += 1;
                            //
                            //getchar();
                            //
                            *(*(*(my_3D_array+i1)+i2)+i3) = chars;
                        }
                    }
                }
            }
        }
    }
    //end of creating 3D array
    int** my_2D_array = calloc(row, sizeof(int*));
    for (int j = 0; j<row; ++j){
        *(my_2D_array+j) = calloc(column, sizeof(int));
        for (int j1 = 0; j1<column; ++j1){
            int t_or_f = -1;
            int sum = 0;
            int main_sum = 0;
            char smallest_value = 0;
            //choosing the true value from 3_D_array
            if (*(*(*(my_3D_array+j)+j1)+0) == 84) t_or_f = 1;
            if (*(*(*(my_3D_array+j)+j1)+0) == 70) t_or_f = 0;
            if (t_or_f == 1){
                for (int k = 1; k<threeD; ++k){
                    for (int k1 = k; k1<threeD; ++k1){
                        for (int k2 = k; k2<=k1; ++k2){
                            sum += *(*(*(my_3D_array+j)+j1)+k2);
                        }
                        if (sum > main_sum){
                            main_sum = sum;
                        }
                        sum = 0;
                    }
                }
                *(*(my_2D_array+j)+j1) = main_sum;
            }
            if (t_or_f == 0){
                for (int m1 = 1; m1<threeD; ++m1){
                    if (*(*(*(my_3D_array+j)+j1)+m1) <= 90 && *(*(*(my_3D_array+j)+j1)+m1) >= 65){
                        if (*(*(*(my_3D_array+j)+j1)+m1) > smallest_value){
                            smallest_value = *(*(*(my_3D_array+j)+j1)+m1);
                        }
                    }
                    else{
                        if (*(*(*(my_3D_array+j)+j1)+m1) > smallest_value){
                            smallest_value = *(*(*(my_3D_array+j)+j1)+m1);
                        }
                    }
                }
                *(*(my_2D_array+j)+j1) = tolower(smallest_value);
            }
            //end of choosing the true value from 3_D_array
        }
    }
    for (int n1 = 0; n1<row; ++n1){
        for(int n2 = 0; n2<column; ++n2){
            if (*(*(*(my_3D_array+n1)+n2)+0) == 84){
                printf("%d ", *(*(my_2D_array+n1)+n2));
            }
            if (*(*(*(my_3D_array+n1)+n2)+0) == 70){
                printf("%c ", *(*(my_2D_array+n1)+n2));
            }
        }
        printf("\n");
    }
    return 0;
}
