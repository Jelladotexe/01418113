#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[20];
    int n,cal;

    fgets(n_str,20,stdin);
    n = atoi(n_str);

    cal = 97 + n-1;

    if (n>0 && n<=26){
        for(int i =0; i<n;i++){
            printf("%c",cal--);
            if(i <n-1){
                printf("-");
            }
        }
        cal+=2;
        for(int j =0; j<n-1;j++){
            printf("-%c",cal++);
        }
    }
    else{
        printf("-");
    }
}