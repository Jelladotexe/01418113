#include <stdio.h>

int main(){
    int amount = 50;
    int fif = amount / 50;
    int twe = (amount % 50) / 20;
    int five = ((amount % 50)%20) / 5;
    int one = ((amount % 50)%20)%5;

    printf("1: %d\n", one);
    printf("5: %d\n", five);
    printf("20: %d\n", twe);
    printf("50: %d\n", fif);
    return 0;
}