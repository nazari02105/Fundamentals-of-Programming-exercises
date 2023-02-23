#include <stdio.h>

int main()
{
    /*int number_of_sequences;
    scanf (" %d", &number_of_sequences);
    for (int i = 1; i<=number_of_sequences; ++i){
        int number_of_sequence_members;
        scanf (" %d", &number_of_sequence_members);
        if (number_of_sequence_members<=3){
            for (int j = 1; j<=number_of_sequence_members; ++j){
                long long int alaki;
                scanf("%lld", &alaki);
            }
            printf("YES\n");
        }
        long long int cte_number, number;
        if (number_of_sequence_members > 3){
            int count = 0;
            int etminan = 0, etminan2 = 0, etminan_nahaee = 0;
            int count_sooodi = 0, count_nozoli = 0;
            long long int max_value, min_value;
            for (int k = 1; k<=number_of_sequence_members; ++k){
                count += 1;
                if (count == 1){
                    scanf("%lld", &cte_number);
                }
                if (count > 1){
                    scanf("%lld", &number);
                    if (number >= cte_number){
                        count_sooodi += 1;
                    }
                    if (number <= cte_number){
                        count_nozoli += 1;
                    }
                    if (number >= cte_number && etminan == 0){
                        cte_number = number;
                        etminan += 1;
                    }
                    if (number < cte_number && etminan == 1){
                        etminan += 1;
                        cte_number = number;
                        max_value = cte_number;
                    }
                    if (number > cte_number && etminan == 1){
                        etminan = 0;
                        cte_number = number;
                    }
                    if (number > cte_number && etminan == 2){
                        printf("NO");
                        etminan_nahaee += 1;
                        etminan = 0;
                        break;
                    }
                    if (number <= cte_number && etminan2 == 0){
                        cte_number = number;
                        etminan2 += 1;
                    }
                    if (number > cte_number && etminan2 == 1){
                        etminan2 += 1;
                        cte_number = number;
                        min_value = cte_number;
                    }
                    if (number < cte_number && etminan2 == 1){
                        etminan2 = 0;
                        cte_number = number;
                    }
                    if (number < cte_number && etminan2 == 2){
                        printf("NO\n");
                        etminan_nahaee += 1;
                        etminan2 = 0;
                        break;
                    }
                }
            }
            if (count_sooodi == number_of_sequence_members){
                printf("YES\n");
            }
            if (count_nozoli == number_of_sequence_members){
                printf("YES\n");
            }
            if (etminan_nahaee == 0){
                printf("YES\n");
            }
        }



    }*/





    int number_of_sequences;
    scanf(" %d", &number_of_sequences);
    for (int a1 = 1; a1<=number_of_sequences; ++a1){
        int number_of_members;
        scanf(" %d", &number_of_members);
        int count = 0;
        int eshtebah = 0;
        int etminan = 0;
        int etminan_2 = 0;
        long long int number;
        long long int cte_number;
        for (int a2 = 1; a2<=number_of_members; ++a2){
            if (number_of_members<=3){
                long long int alaki;
                scanf(" %lld", &alaki);
            }
            if (number_of_members>3){
                if (count == 0){
                    scanf(" %lld", &cte_number);
                    count += 1;
                }
                else if (count > 0){
                    scanf(" %lld", &number);
                    count += 1;
                    for (int a5 = 1; a5<5; ++a5){
                       /*if (number >= cte_number && etminan == 0){
                            etminan += 1;
                            //etminan_2 = -1;
                            break;
                        }*/
                        if (cte_number == number){
                            break;
                        }
                        if (cte_number > number && etminan == 1){
                            etminan += 1;
                            break;
                        }
                        if (number >= cte_number && etminan == 1){
                            etminan = 3;
                            break;
                        }
                        if (number > cte_number && etminan == 2){
                            eshtebah += 1;
                            break;
                        }
                        if (number < cte_number && etminan == 2){
                            etminan = 2;
                            break;
                        }
                        if (number >= cte_number && etminan == 3){
                            etminan = 3;
                            break;
                        }
                        if (number < cte_number && etminan == 3){
                            etminan = 2;
                            break;
                        }
                        if (number >= cte_number && etminan == 0){
                            etminan += 1;
                            etminan_2 = -1;
                            //etminan_2 = -1;
                            if (count != 2){
                                break;
                            }
                            //break;
                        }
                        /*if (number <= cte_number && etminan_2 == 0){
                            etminan_2 += 1;
                            //etminan = -1;
                            break;
                        }*/
                        if (cte_number < number && etminan_2 == 1){
                            etminan_2 += 1;
                            break;
                        }
                        if (number <= cte_number && etminan_2 == 1){
                            etminan_2 = 3;
                            break;
                        }
                        if (number < cte_number && etminan_2 == 2){
                            eshtebah += 1;
                            break;
                        }
                        if (number > cte_number && etminan_2 == 2){
                            etminan_2 = 2;
                            break;
                        }
                        if (number <= cte_number && etminan_2 == 3){
                            etminan_2 = 3;
                            break;
                        }
                        if (cte_number < number && etminan_2 == 3){
                            etminan_2 = 2;
                            break;
                        }
                        if (number <= cte_number && etminan_2 == 0){
                            etminan_2 += 1;
                            etminan = -1;
                            //etminan = -1;
                            if (count != 2){
                                break;
                            }
                            //break;
                        }
                    }
                    cte_number = number;
                }
                }
            }
            if (eshtebah > 0){
                printf("NO\n");
            }
            if (eshtebah == 0){
                printf("YES\n");
            }
        }







    return 0;
}
