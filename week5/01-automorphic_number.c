#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char n_str[10];
    int size=0,same=0;
    long long int n, n_square,x,y,divide_n;

    printf("Input n = ");
    fgets(n_str,10,stdin);
    n = atoi(n_str);

    n_square = n*n;
    printf("n^2 = %lld\n", n_square);
    
    // หาแบบ len
    int n_temp=n;
    if (n ==0){
        size = 1;
    }
    else{
        while (n_temp > 0){
            n_temp /= 10;
            size += 1;
        }
    }

    divide_n =n;
    for(int i=0;i<size;i++){
        x = divide_n%10;
        y = n_square%10;
        if(x==y){
            same +=1;
        }
        divide_n /= 10;
        n_square /= 10;
    }


    if(size == same){
        printf("Yes. %lld is automorphic number.",n);
    }
    else{
        printf("No. %lld is not automorphic number.",n);
    }
    
}