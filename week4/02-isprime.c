#include <stdio.h>
#include <stdlib.h>

int is_prime(int x){
    if (x<2) return 0;
    
    for(int j =2;j<x;j++){
        if(x%j == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (int i=2; i<=n;i++)
    {
        if (is_prime(i)) {
            printf("%d is a prime number.\n", i);
        }
  }
}
