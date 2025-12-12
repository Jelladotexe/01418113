#include <stdio.h>
#include <stdlib.h>

int main(){
    char f_str[20], s_str[20];
    long long int f,s,max,min,result_gcd,result_lcm;

    fgets(f_str,20,stdin);
    fgets(s_str,20,stdin);

    f = atol(f_str);
    s = atol(s_str);

    if(f>=s){
        max = f;
        min = s;
    }
    else if(s>=f){
        max = s;
        min = f;
    }

    long long int remain = max % min;
    while(remain){
        long long int temp;
        temp = min;
        max = temp;
        min = remain;
        remain = max % min;
    }
    result_gcd = min;
    result_lcm = (f*s) /result_gcd;

    printf("GCD: %lld\n", result_gcd);
    printf("LCM: %lld", result_lcm);
}