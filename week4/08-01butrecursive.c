#include <stdio.h>
#include <stdlib.h>

long long int bina_recu(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    return bina_recu(n/2) * 10 + (n%2);
}


int main(){
    char n_str[14];
    int n;

    fgets(n_str,14,stdin);
    n = atoi(n_str);

    printf("%lld",bina_recu(n));
}