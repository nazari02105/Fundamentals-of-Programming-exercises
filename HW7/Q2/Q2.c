#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char main_string[99999];
    gets(main_string);
    char answer[99999];
    strcpy(answer, main_string);
    char statement[99999];
    int print_on_off = 1;
    while(1){
        gets(statement);
        if (statement[0] == 'c' && statement[1] == 'o' && statement[2] == 'p'){
            char number[10000] = "0";
            for (int i = 0; i<strlen(statement); ++i){
                if (statement[i] == ' '){
                    int j = i + 1;
                    while(statement[j] != '\0'){
                        number[j-i-1] = statement[j];
                        j += 1;
                    }
                }
            }
            int number_format = atoi(number);
            char fake_string[99999];
            strcpy(fake_string, answer);
            if (number_format == 0){
                strcat(answer, fake_string);
            }
            else{
                for (int k = 0; k<number_format; ++k){
                    strcat(answer, fake_string);
                }
            }
            if (print_on_off == 1){
                printf("%s\n", answer);
            }
        }
        //--------------------
        if (statement[0] == 'a' && statement[1] == 'p' && statement[2] == 'p' && statement[3] == 'e' && statement[4] == 'n'){
            char new_string[99999];
            for (int i = 0; i<strlen(statement); ++i){
                if (statement[i] == ' '){
                    int j = i + 1;
                    while (statement[j] != '\0'){
                        new_string[j-i-1] = statement[j];
                        j += 1;
                    }
                    new_string[j-i-1] = '\0';
                    break;
                }
            }
            strcat(answer, new_string);
            if (print_on_off == 1){
                printf("%s\n", answer);
            }
        }
        //--------------------
        if (statement[0] == 'f' && statement[1] == 'i' && statement[2] == 'n' && statement[3] == 'd'){
            char sub_string[99999];
            for (int i = 0; i<strlen(statement); ++i){
                if (statement[i] == ' '){
                    int j = i+1;
                    while (statement[j] != '\0'){
                        sub_string[j-i-1] = statement[j];
                        j += 1;
                    }
                    sub_string[j-i-1] = '\0';
                    break;
                }
            }
            int sub_string_len = strlen(sub_string);
            int main_counter = 0;
            for (int k = 0; k<strlen(answer); ++k){
                int counter = 0;
                if (answer[k] == sub_string[0]){
                    for (int m = 0; m<sub_string_len; ++m){
                        if (answer[k+m] != sub_string[m]){
                            break;
                        }
                        else{
                            counter += 1;
                        }
                    }
                }
                if (counter == sub_string_len){
                    main_counter += 1;
                }
            }
            if (main_counter > 0){
                char how_many_times[10000];
                sprintf(how_many_times, "%d", main_counter);
                strcat(answer, how_many_times);
            }
            if (main_counter == 0){
                strcat(answer, sub_string);
            }
            if (print_on_off == 1){
                printf("%s\n", answer);
            }
        }
        //--------------------
        if (statement[0] == 'c' && statement[1] == 'o' && statement[2] == 'u' && statement[3] == 'n' && statement[4] == 't'){
            if (strlen(statement) == 7){
                char my_char = statement[strlen(statement)-1];
                int counter = 0;
                for (int q = 0; q<strlen(answer); ++q){
                    if (answer[q] == my_char){
                        counter += 1;
                    }
                }
                char counter_string[20];
                sprintf(counter_string, "%d", counter);
                strcat(answer, counter_string);
                if (print_on_off == 1){
                    printf("%s\n", answer);
                }
            }
            else{
                char alphabet_or_diget[10000];
                for (int i = 0; i<strlen(statement); ++i){
                    if (statement[i] == ' '){
                        int j = i+1;
                        while (statement[j] != '\0'){
                            alphabet_or_diget[j-i-1] = statement[j];
                            j += 1;
                        }
                        alphabet_or_diget[j-i-1] = '\0';
                        break;
                    }
                }
                if (alphabet_or_diget[0] == 'a'){
                    int alphabet_counter = 0;
                    for (int k = 0; k<strlen(answer); ++k){
                        if (isalpha(answer[k])){
                            alphabet_counter += 1;
                        }
                    }
                    char alphabet_counter_string[15];
                    sprintf(alphabet_counter_string, "%d", alphabet_counter);
                    strcat(answer, alphabet_counter_string);
                }
                if (alphabet_or_diget[0] == 'd'){
                    int diget_counter = 0;
                    for (int k = 0; k<strlen(answer); ++k){
                        if (isdigit(answer[k])){
                            diget_counter += 1;
                        }
                    }
                    char diget_counter_string[15];
                    sprintf(diget_counter_string, "%d", diget_counter);
                    strcat(answer, diget_counter_string);
                }
                if (print_on_off == 1){
                    printf("%s\n", answer);
                }
            }
        }
        //--------------------
        if (statement[0] == 'd' && statement[1] == 'e' && statement[2] == 'l' && statement[3] == 'e'){
            char sub_string[99999];
            for (int i = 0; i<strlen(statement); ++i){
                if (statement[i] == ' '){
                    int j = i+1;
                    while (statement[j] != '\0'){
                        sub_string[j-i-1] = statement[j];
                        j += 1;
                    }
                    sub_string[j-i-1] = '\0';
                    break;
                }
            }
            int sub_string_len = strlen(sub_string);
            for (int k = 0; k<strlen(answer); ++k){
                int counter = 0;
                if (answer[k] == sub_string[0]){
                    for (int m = 0; m<sub_string_len; ++m){
                        if (answer[k+m] != sub_string[m]){
                            break;
                        }
                        else{
                            counter += 1;
                        }
                    }
                }
                if (counter == sub_string_len){
                    for (int n = k; n<=strlen(answer); ++n){
                        answer[n] = answer[n+sub_string_len];
                    }
                    k -= 1;
                }
            }
            if (print_on_off == 1){
                printf("%s\n", answer);
            }
        }
        //--------------------
        if (strcmp(statement, "reverse") == 0){
            char answer_copy[99999];
            strcpy(answer_copy, answer);
            int answer_len = strlen(answer);
            for (int i = 0; i<answer_len; ++i){
                answer[i] = answer_copy[answer_len-i-1];
            }
            if (print_on_off == 1){
                printf("%s\n", answer);
            }
        }
        //--------------------
        if (statement[0] == 'r' && statement[1] == 'e' && statement[2] == 'v' && statement[3] == 'e' && statement[7] == ' '){
            char begining[10000];
            for (int i = 0; i<strlen(statement); ++i){
                if (statement[i] == ' '){
                    int j = i+1;
                    while (statement[j] != ','){
                        begining[j-i-1] = statement[j];
                        j += 1;
                    }
                    begining[j-i-1] = '\0';
                    break;
                }
            }
            char end[10000];
            for (int j = 0; j<strlen(statement); ++j){
                if (statement[j] == ','){
                    int k = j+1;
                    while (statement[k] != '\0'){
                        end[k-j-1] = statement[k];
                        k += 1;
                    }
                    end[k-j-1] = '\0';
                    break;
                }
            }
            long long int begining_int = atoi(begining);
            long long int end_int = atoi(end);
            long long int answer_len = strlen(answer);
            char answer_copy[99999];
            strcpy(answer_copy, answer);
            int x = 0;
            for (long long int q = begining_int; q<end_int; ++q){
                answer[q] = answer_copy[end_int - x - 1];
                x += 1;
            }
            if (print_on_off == 1){
                printf("%s\n", answer);
            }
        }
        //--------------------
        if (statement[0] == 'P' && statement[1] == 'R' && statement[2] == 'I' && statement[3] == 'N' && statement[4] == 'T'){
            char on_or_off[100];
            for (int i = 0; i<strlen(statement); ++i){
                if (statement[i] == ' '){
                    int j = i+1;
                    while (statement[j] != '\0'){
                        on_or_off[j-i-1] = statement[j];
                        j += 1;
                    }
                    on_or_off[j-i-1] = '\0';
                    break;
                }
            }
            if (on_or_off[1] == 'N'){
                print_on_off = 1;
            }
            if (on_or_off[1] == 'F'){
                print_on_off = 0;
            }
        }
        //--------------------
        if (statement[0] == 'p' && statement[1] == 'r' && statement[2] == 'i' && statement[3] == 'n' && statement[4] == 't'){
            printf("%s\n", answer);
        }
        //--------------------
        if (statement[0] == 'e' && statement[1] == 'x' && statement[2] == 'i' && statement[3] == 't'){
            break;
        }
        //--------------------
    }
    return 0;
}


