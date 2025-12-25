#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[3];
    int n;

    fgets(n_str,3,stdin);
    n = atoi(n_str);

    for(int i=1;i<=n;i++){
        printf("*");
        for(int j =1;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    int i =n-1;
    int j =i;
    while(i!=0){
        printf("*");
        i -= 1;
        while(j!=1){
            j-=1;
            printf("*");
        }
        printf("\n");
        j = i;
    }
}