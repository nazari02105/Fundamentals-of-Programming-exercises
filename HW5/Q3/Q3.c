#include <stdio.h>

void color (int xxx, int yyy ,int row1, int col1, int s1, int live_number1);
int my_array[101][101];
int is_it_checked[101][101] = {0};


int main (void)
{
    int row, col;
    scanf("%d %d", &row, &col);
    int x, y, c;
    scanf("%d %d %d", &x, &y, &c);
    for (int i = 0; i < row; ++i){
        for (int j = 0; j < col; ++j){
            int this_place;
            scanf("%d", &this_place);
            my_array[i][j] = this_place;
        }
    }
    /*for (int aaa1 = 0; aaa<row; ++aaa1){
        for (int bbb1 = 0; bbb1<col; ++bbb1){
            is_it_checked[aaa1][bbb1] = 0;
        }
    }*/
    int live_number = my_array[x-1][y-1];
    color(x-1, y-1, row, col, c, live_number);
    my_array[x-1][y-1] = c;
    is_it_checked[x-1][y-1] = 1;
    for (int aaa = 0; aaa<row; ++aaa){
        for (int bbb = 0; bbb<col; ++bbb){
            printf("%d ", my_array[aaa][bbb]);
        }
        printf("\n");
    }
}







void color (int xxx, int yyy, int row1, int col1, int s1, int live_number1)
{
    if (xxx < 0 || xxx > row1-1 || yyy < 0 || yyy >col1-1 || is_it_checked[xxx][yyy] == 1){
        return;
    }
    is_it_checked[xxx][yyy] = 1;
    if (my_array[xxx][yyy+1] == live_number1){
        if (yyy+1 > col1-1){
            return;
        }
        my_array[xxx][yyy+1] = s1;
        color(xxx, yyy+1, row1, col1, s1, live_number1);
    }
    if (my_array[xxx][yyy-1] == live_number1){
        if (yyy-1 < 0){
            return;
        }
        my_array[xxx][yyy-1] = s1;
        color(xxx, yyy-1, row1, col1, s1, live_number1);
    }
    if (my_array[xxx+1][yyy] == live_number1){
        if (xxx+1 > row1 -1){
            return;
        }
        my_array[xxx+1][yyy] = s1;
        color(xxx+1, yyy, row1, col1, s1, live_number1);
    }
    if (my_array[xxx-1][yyy] == live_number1){
        if (xxx-1 < 0){
            return;
        }
        my_array[xxx-1][yyy] = s1;
        color(xxx-1, yyy, row1, col1, s1, live_number1);
    }
    if (my_array[xxx+1][yyy+1] == live_number1){
        if (xxx+1 > row1-1 || yyy+1 > col1-1){
            return;
        }
        my_array[xxx+1][yyy+1] = s1;
        color(xxx+1, yyy+1, row1, col1, s1, live_number1);
    }
    if (my_array[xxx+1][yyy-1] == live_number1){
        if (xxx+1> row1-1 || yyy-1 < 0){
            return;
        }
        my_array[xxx+1][yyy-1] = s1;
        color(xxx+1, yyy-1, row1, col1, s1, live_number1);
    }
    if (my_array[xxx-1][yyy+1] == live_number1){
        if (xxx-1 < 0 || yyy+1 > col1-1){
            return;
        }
        my_array[xxx-1][yyy+1] = s1;
        color(xxx-1, yyy+1, row1, col1, s1, live_number1);
    }
    if (my_array[xxx-1][yyy-1] == live_number1){
        if (xxx-1 < 0 || yyy-1 < 0){
            return;
        }
        my_array[xxx-1][yyy-1] = s1;
        color(xxx-1, yyy-1, row1, col1, s1, live_number1);
    }

}
