#include <stdio.h>



int emtiyas_dehi (int npt, int s_r, int m_r, int l_r, int p1, int p2, int p3);







int main()
{
    int sh1, sh2, sh3;
    scanf("%d%*c %d%*c %d%*c", &sh1, &sh2, &sh3);
    int r1, r2, r3;
    if (sh1 < sh2 && sh1 < sh3){
        r1 = sh1;
        if (sh2 < sh3){
            r2 = sh2;
            r3 = sh3;
        }
        else{
            r2 = sh3;
            r3 = sh2;
        }
    }
    else if (sh2 < sh1 && sh2 < sh3){
        r1 = sh2;
        if (sh1 < sh3){
            r2 = sh1;
            r3 = sh3;
        }
        else{
            r2 = sh3;
            r3 = sh1;
        }
    }
    else if (sh3 < sh2 && sh3 < sh1){
        r1 = sh3;
        if (sh1 < sh2){
            r2 = sh1;
            r3 = sh2;
        }
        else{
            r2 = sh2;
            r3 = sh1;
        }
    }
    int emtiyas1, emtiyas2, emtiyas3;
    scanf("%d %d %d", &emtiyas1, &emtiyas2, &emtiyas3);
    int point1, point2, point3;
    if (emtiyas1 > emtiyas2 && emtiyas1 > emtiyas3){
        point1 = emtiyas1;
        if (emtiyas2 > emtiyas3){
            point2 = emtiyas2;
            point3 = emtiyas3;
        }
        else{
            point2 = emtiyas3;
            point3 = emtiyas2;
        }
    }
    else if (emtiyas2 > emtiyas1 && emtiyas2 > emtiyas3){
        point1 = emtiyas2;
        if (emtiyas1 > emtiyas3){
            point2 = emtiyas1;
            point3 = emtiyas3;
        }
        else{
            point2 = emtiyas3;
            point3 = emtiyas1;
        }
    }
    else if (emtiyas3 > emtiyas2 && emtiyas3 > emtiyas2){
        point1 = emtiyas3;
        if (emtiyas1 > emtiyas2){
            point2 = emtiyas1;
            point3 = emtiyas2;
        }
        else{
            point2 = emtiyas2;
            point3 = emtiyas1;
        }
    }
    if (r1 == r2 || r3 == r2 || r1 == r3){
        int r_alaki;
        scanf("%d", &r_alaki);
        int n_alaki;
        scanf("%d", &n_alaki);
        int x_alaki, y_alaki;
        for (int i = 1; i<=n_alaki; ++i){
            scanf("%d %d", &x_alaki, &y_alaki);
        }
        printf("error");
    }
    else{
        int smallest_r;
        scanf("%d", &smallest_r);
        int middle_r = ((float)r2/r1) * smallest_r;
        int largest_r = ((float)r3/r1) * smallest_r;
        int number_of_throw;
        scanf("%d", &number_of_throw);
        int score;
        score = emtiyas_dehi(number_of_throw, smallest_r, middle_r, largest_r, point1, point2, point3);
        printf("%d", score);
    }
    return 0;
}









int emtiyas_dehi (int npt, int s_r, int m_r, int l_r, int p1, int p2, int p3)
{
    int x, y, total_score = 0;
    for (int j = 1; j<=npt; ++j){
        scanf("%d %d", &x, &y);
        if ( x*x + y*y <= s_r*s_r){
            total_score += p1;
        }
        else if (x*x + y*y <= m_r*m_r){
            total_score += p2;
        }
        else if (x*x + y*y <= l_r*l_r){
            total_score += p3;
        }
    }
    return total_score;
}



