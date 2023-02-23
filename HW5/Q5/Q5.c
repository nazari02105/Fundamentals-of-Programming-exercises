#include <stdio.h>

long long int my_array[100003] = {0};
long long int highest_index_in_array;


int main (void)
{
    *(my_array-1) = 0;
    *(my_array-2) = 0;
    long long int maximum = 0;
    long long int number;
    scanf("%lld", &number);
    for (long long int i = 0; i<number; ++i){
        long long int powersInOrder;
        scanf("%lld", &powersInOrder);
        if (powersInOrder > maximum){
            maximum = powersInOrder;
        }
        my_array[powersInOrder] += 1;
    }
    highest_index_in_array = maximum;
    for (long long int i1 = 1; i1<=maximum; ++i1){
        long long int this_index = my_array[i1];
        my_array[i1] = i1 * this_index;
    }
    long long int sum = 0;
    long long int first_love = 0;
    long long int second_love = 2;
    while (second_love <= highest_index_in_array){
        if (my_array[second_love] + my_array[first_love] >= my_array[second_love-1]){
            long long int help = my_array[second_love];
            my_array[second_love] = help + my_array[first_love];
            first_love += 1;
            second_love += 1;
        }
        else{
            my_array[second_love] = my_array[second_love-1];
            first_love += 1;
            second_love += 1;
        }
    }
    printf("%lld", my_array[highest_index_in_array]);
}
