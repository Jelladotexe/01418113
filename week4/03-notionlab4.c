#include <stdio.h>

int main(){
    int add(int);

    int n=3;
    int result = add(n);
    printf("result: %d\n", result);
}

int add(int n){
    if(n==0) return 0;
    return n + add(n-1);
}