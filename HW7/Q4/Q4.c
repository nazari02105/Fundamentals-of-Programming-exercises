#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char value (char* s, int P);

typedef struct block{
    char Primary_String[1000];
    int n;
    char transaction[1000][1000];
    int P;
}Block;


Block* new_block(int number_of_transaction, int Prime_number);

char every_time_hash[1000];
char new_hash[1000];

int main()
{
    int number_of_blocks;
    scanf("%d", &number_of_blocks);
    getchar();
    char first_block_hash[1000];
    gets(first_block_hash);
    strcpy(every_time_hash, first_block_hash);
    int number_of_transaction;
    int Prime_number;
    for (int i = 1; i<number_of_blocks; ++i){
        scanf("%d %d", &number_of_transaction, &Prime_number);
        //
        getchar();
        //
        new_block(number_of_transaction, Prime_number);
        strcpy(every_time_hash, new_hash);
    }
    printf("%s", every_time_hash);
    return 0;
}






//-------------------------------------------------------
char value (char* s, int P)
{
    unsigned long long int s_len = strlen(s);
    unsigned long long int zigma_answer = 0;
    unsigned long long int instead_of_pow = 1;
    for (int i = 0; i<s_len; ++i){
    	//
    	instead_of_pow %= 94;
    	//
        zigma_answer += s[i]*instead_of_pow;
        zigma_answer %= 94;
        instead_of_pow *= P;
    }
    zigma_answer %= 94;
    zigma_answer += 33;
    return (char)zigma_answer;
}
//-------------------------------------------------------
Block* new_block(int number_of_transaction, int Prime_number)
{

    struct block my_Block_type_value;

    my_Block_type_value.n = number_of_transaction;
    my_Block_type_value.P = Prime_number;

    for (int i = 0; i<number_of_transaction; ++i){
        char every_time_transaction[1000];
        gets(every_time_transaction);
        strcpy(my_Block_type_value.transaction[i], every_time_transaction);
    }
    char my_new_hash[1000];
    for (int j = 0; j<number_of_transaction; ++j){
        my_Block_type_value.Primary_String[j] = value(my_Block_type_value.transaction[j], my_Block_type_value.P);
        my_Block_type_value.Primary_String[j+1] = '\0';
    }
    char modify_item = value(every_time_hash, my_Block_type_value.P);
    int index = modify_item%number_of_transaction;
    my_Block_type_value.Primary_String[index] = modify_item;
    strcpy(new_hash, my_Block_type_value.Primary_String);
    return &my_Block_type_value;
}
//-------------------------------------------------------


