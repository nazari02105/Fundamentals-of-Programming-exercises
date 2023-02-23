#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long int x;
    scanf("%lld", &x);
    getchar();
    char my_array[x][10000];
    char my_array_2[x][10000];
    for (int i = 0; i<x; ++i){
        gets(my_array[i]);
    }
    for (int j = 0; j<x; ++j){
        long long int strings_len = strlen(my_array[j]);
        long long int place = 0;
        for (int k = 0; k<strings_len; ++k){
            if (my_array[j][k] != ' '){
                if (my_array[j][k] == '_'){
                    my_array_2[j][place] = '!';
                    place += 1;
                }
                else if (my_array[j][k] == '-'){
                    my_array_2[j][place] = '"';
                    place += 1;
                }
                else if (my_array[j][k] == '!'){
                    my_array_2[j][place] = '#';
                    place += 1;
                }
                else if (my_array[j][k] == '@'){
                    my_array_2[j][place] = '$';
                    place += 1;
                }
                else if (my_array[j][k] == ')'){
                    my_array_2[j][place] = '%';
                    place += 1;
                }
                else if (my_array[j][k] == '('){
                    my_array_2[j][place] = '&';
                    place += 1;
                }
                else if (my_array[j][k] == '%'){
                    my_array_2[j][place] = '*';
                    place += 1;
                }
                else{
                    my_array_2[j][place] = my_array[j][k];
                    place += 1;
                }
            }
        }
        my_array_2[j][place] = '\0';
    }
    int number = 1;
    for (int m = 0; m<x; ++m){
        int m_before_enter = m;
        for (int n = 0; n<x; ++n){
            int m_len = strlen(my_array_2[m]);
            int n_len = strlen(my_array_2[n]);
            int until_when;
            if (m_len < n_len){
                until_when = m_len;
            }
            else{
                until_when = n_len;
            }
            int equal_or_not = -1;
            for (int q = 0; q<until_when; ++q){
                if (my_array_2[m][q] > my_array_2[n][q]){
                    equal_or_not = 1;
                    m = n;
                    n = 0;
                    break;
                }
                if (my_array_2[m][q] < my_array_2[n][q]){
                    equal_or_not = 1;
                    break;
                }
            }
            if (equal_or_not == -1 && m != n){
                if (n_len < m_len){
                    m = n;
                    n = 0;
                }
            }
        }
        if (m_before_enter < x-1){
            printf("%s\n", my_array[m]);
            my_array_2[m][0] = '~';
            m = m_before_enter;
            number += 1;
        }
        if (m_before_enter == x-1){
            printf("%s", my_array[m]);
            my_array_2[m][0] = '~';
            m = m_before_enter;
            number += 1;
        }
    }
    return 0;
}

