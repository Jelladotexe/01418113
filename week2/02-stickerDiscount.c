#include <stdio.h>
#include <stdlib.h>

int main(){
    char sticker_str[10], price_str[20];
    int sticker, sticker_used = 0;
    float price, discount = 0.0;

    fgets(sticker_str, 10, stdin);
    fgets(price_str,20,stdin);

    sticker = atoi(sticker_str);
    price = atof(price_str);

    if (sticker == 0){
        sticker_used = 0;
        discount = 0.0;
    }
    else if (sticker == 1){
        sticker_used = 1;
        discount = 0.1;
    }
    else if (sticker == 2){
        sticker_used = 2;
        discount = 0.15;
    }
    else if (sticker >= 3 && sticker <6){
        sticker_used = 3;
        discount = 0.2;
    }
    else if (sticker >= 6 && sticker <9){
        sticker_used = 6;
        discount = 0.3;
    }
    else{
        sticker_used = 9;
        discount = 0.4;
    }

    float total = price - (price*discount);
    int discount_percent = (int)(discount*100);

    printf("You get %d percents discount.\n",discount_percent);
    printf("Total amount due is %.2f Baht.\n", total);
    printf("And you have %d stickers left.", sticker-sticker_used);
}