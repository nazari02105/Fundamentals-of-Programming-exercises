#include <stdio.h>
#include <string.h>
char main_information[33554432];
char const_information[32] = "01110110010011110110011101100111";
int main()
{
    //char const_information[32] = "01110110010011110110011101100111";
    int how_many_times;
    scanf("%d", &how_many_times);
    //char main_information[1048576];
    int qaz = 0;
    for (int i = 1; i<=how_many_times/32; ++i){
        for (int qaz2 = 0; qaz2<=31; ++qaz2){
            main_information[qaz] = const_information[qaz2];
            qaz += 1;
        }
    }
    char command_action[10];
    while (command_action[0] != 'K'){
        scanf("%s", command_action);
        if (command_action[0] == 'K'){
            break;
        }
        if (command_action[0] == 'G'){
            int sar, tah;
            scanf("%d %d", &sar, &tah);
            for (int j = sar - 1; j<= tah - 1; ++j){
                printf("%c", main_information[j]);
            }
            printf("\n");
        }
        if (command_action[0] == 'A'){
            int sar1, tah1, one_or_zero;
            scanf("%d %d %d", &sar1, &tah1, &one_or_zero);
            char one_or_zero_char;
            //printf("here\n");
            if (one_or_zero == 0){
                one_or_zero_char = '0';
            }
            if (one_or_zero == 1){
                one_or_zero_char = '1';
            }
            for (int k = sar1 - 1; k<=tah1 - 1; ++k){
                //printf("here\n");
                main_information[k] = one_or_zero_char;
            }
        }
    }
    return 0;
}
