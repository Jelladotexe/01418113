#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[3];

    fgets(n_str,3,stdin);
    int n = atoi(n_str);


    while(n > -1){
        printf("%d\n",n--);
    }
}