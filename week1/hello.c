#include<stdio.h>
int main() {
    int computer_time = 1678;  
    int d = (int)(computer_time / 1440);
    int h = (int)((computer_time % 1440) / 60);
    int m = (int)((computer_time % 1440) % 60);
    
    printf("It is %d days %d hours and %d minutes.",d,h,m);
    return 0;
}