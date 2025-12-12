#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n){
    double f1 = pow((1 + pow(5,0.5)), n);
    double f2 = pow((1 - pow(5,0.5)), n);
    double f3 = pow(2,n) * pow(5,0.5);

    int fn = (f1-f2) / f3;

    return fn;
}
int main(){
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);

    for(i =0;i<=n;i++){
        printf("F(%d) = %d\n",i,fibo(i));
    }

}