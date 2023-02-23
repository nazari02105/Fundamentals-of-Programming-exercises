#include <stdio.h>

int main()
{
    int sentence_character, word_character;
    scanf("%d", &sentence_character);
    scanf("%d", &word_character);
    char input_char;
    int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0;


    for (int m = 1; m<=sentence_character; ++m){
        scanf(" %c", &input_char);
        if (input_char == 'a'){
            a += (1<<m)/2;
        }
        if (input_char == 'b'){
            b += (1<<m)/2;
        }
        if (input_char == 'c'){
            c += (1<<m)/2;
        }
        if (input_char == 'd'){
            d += (1<<m)/2;
        }
        if (input_char == 'e'){
            e += (1<<m)/2;
        }
        if (input_char == 'f'){
            f += (1<<m)/2;
        }
        if (input_char == 'g'){
            g += (1<<m)/2;
        }
        if (input_char == 'h'){
            h += (1<<m)/2;
        }
        if (input_char == 'i'){
            i += (1<<m)/2;
        }
    }




    int a1=0, b1=0, c1=0, d1=0, e1=0, f1=0, g1=0, h1=0, i1=0;
    char input_char_1;
    for (int k = 1; k<=word_character; ++k){
        scanf(" %c", &input_char_1);
        if (input_char_1 == 'a'){
            a1 += (1<<k)/2;
        }
        if (input_char_1 == 'b'){
            b1 += (1<<k)/2;
        }
        if (input_char_1 == 'c'){
            c1 += (1<<k)/2;
        }
        if (input_char_1 == 'd'){
            d1 += (1<<k)/2;
        }
        if (input_char_1 == 'e'){
            e1 += (1<<k)/2;
        }
        if (input_char_1 == 'f'){
            f1 += (1<<k)/2;
        }
        if (input_char_1 == 'g'){
            g1 += (1<<k)/2;
        }
        if (input_char_1 == 'h'){
            h1 += (1<<k)/2;
        }
        if (input_char_1 == 'i'){
            i1 += (1<<k)/2;
        }
    }




    int count = 0;
    int etminan = 0;
    int makan = -1;
    int etminan_2 = 1;

    for (int j = 0; j<sentence_character; ++j){
        char done_done;
        if (a%2 == 1){
            done_done = 'a';
            makan += 1;
        }
        if (b%2 == 1){
            done_done = 'b';
            makan += 1;
        }
        if (c%2 == 1){
            done_done = 'c';
            makan += 1;
        }
        if (d%2 == 1){
            done_done = 'd';
            makan += 1;
        }
        if (e%2 == 1){
            done_done = 'e';
            makan += 1;
        }
        if (f%2 == 1){
            done_done = 'f';
            makan += 1;
        }
        if (g%2 == 1){
            done_done = 'g';
            makan += 1;
        }
        if (h%2 == 1){
            done_done = 'h';
            makan += 1;
        }
        if (i%2 == 1){
            done_done = 'i';
            makan += 1;
        }

        if (etminan_2>j){
            a /= 2;
            b /= 2;
            c /= 2;
            d /= 2;
            e /= 2;
            f /= 2;
            g /= 2;
            h /= 2;
            i /= 2;
        }



        etminan_2 += 1;



        char done_done_1;
        for (int n = 0; n< word_character; ++n){
        char done_done_1;
        if (a1%2 == 1){
            done_done_1 = 'a';
        }
        if (b1%2 == 1){
            done_done_1 = 'b';
        }
        if (c1%2 == 1){
            done_done_1 = 'c';
        }
        if (d1%2 == 1){
            done_done_1 = 'd';
        }
        if (e1%2 == 1){
            done_done_1 = 'e';
        }
        if (f1%2 == 1){
            done_done_1 = 'f';
        }
        if (g1%2 == 1){
            done_done_1 = 'g';
        }
        if (h1%2 == 1){
            done_done_1 = 'h';
        }
        if (i1%2 == 1){
            done_done_1 = 'i';
        }


        if (done_done == done_done_1){
            count += 1;
            a1 /= 2;
            b1 /= 2;
            c1 /= 2;
            d1 /= 2;
            e1 /= 2;
            f1 /= 2;
            g1 /= 2;
            h1 /= 2;
            i1 /= 2;
            break;
        }
    }
    if (count == word_character){
        printf("%d", makan-(word_character-1));
        break;
    }
    if (count>0){
        etminan += 1;
    }
    int eshtebah = count;
    if (etminan>count){
        count = 0;
        etminan = 0;

    }






    }


    if (count != word_character){
        printf("%d", -1);
    }


}
