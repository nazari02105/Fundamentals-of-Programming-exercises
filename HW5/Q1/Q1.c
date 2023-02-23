#include <stdio.h>
/*#include "slre.h"
int main()
{
    char regex[1000] = "([A-Za-z0-9 ]+)";
    //char message[100000] = "{\"type\":\"List\",\"message\":[{\"id\":1,\"author\":\"user\",\"content\":\"hello this is my first tweet.\",\"comments\":{\"sadegh\":\"another comment\",\"amir\":\"this is a comment\"},\"likes\":1},{\"id\":2,\"author\":\"user\",\"content\":\"this is another tweet.\",\"comments\":{},\"likes\":0}]";
    char message[1000] = "ali {nazari}";
    int num_caps = 10;
    char caps[num_caps][1000];
    slre_match(regex, message, 1000, caps, num_caps, 0);
    printf("%s", caps[1]);

    char regex[1000] = "([A-Za-z0-9 ]+)";
    char message[100000] = "{\"type\"}";
    int num_caps = 10;
    char caps[num_caps][100000];
    slre_match(regex, message, 100000, caps, num_caps, 0);
    printf("%s", caps[0]);
}*/
int count = 0;
int etminan = 0;

int main (void)
{
    int x;
    scanf("%d", &x);
    int my_array[x+1];
    my_array[0] = 0;
    for (int i = 1; i<=x; ++i){
        my_array[i] = i;
    }
    int i = 1;
    while (i<=1000){
        count = 0;




        for (int k = 1; k<=x; ++k){
            if (my_array[k] != 0){
                etminan += 1;
            }
            if (etminan > 1){
                my_array[k] = 0;
                etminan = 0;
            }
        }





        for (int j = 0; j <= x; ++j){
            if (my_array[j] > 0){
                count += 1;
            }
        }
        if (count == 1){
            for (int m = 1; m <= x; ++m){
                if (my_array[m] != 0){
                    printf("%d", m);
                }
            }
            break;
        }
        i += 1;
    }
}
