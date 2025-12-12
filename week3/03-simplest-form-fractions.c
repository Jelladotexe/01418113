#include <stdio.h>
#include <stdlib.h>

int main(){
    char a_str[7],b_str[7];
    int a,b,min,max,gcd;

    fgets(a_str,7,stdin);
    fgets(b_str,7,stdin);

    a = atoi(a_str);
    b = atoi(b_str);

     if(a>=b){
        max = a;
        min = b;
    }
    else if(b>=a){
        max = b;
        min = a;
    }

    long long int remain = max % min;
    while(remain){
        long long int temp;
        temp = min;
        max = temp;
        min = remain;
        remain = max % min;
    }
    gcd = min;

    a = a/gcd;
    b = b/gcd;

    if(b > 1){
        printf("= %d/%d",a,b);
    }
    else{
        printf("= %d",a);
    }


}