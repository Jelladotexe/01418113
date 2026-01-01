#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char n_str[10];
    int n,a,b;
    double c;
    

    fgets(n_str,10,stdin);
    n = atoi(n_str);

    for(a=1;a<n;a++){
        for(b =a+1;b<n;b++){
            c = sqrt(a*a + b*b);
            if(a+b+c == n){
                break;
            }
        }
        if(a+b+c == n){
            break;
        }
    }
    
    if(a+b+c == n){
        printf("(%d, %d, %.0f)",a,b,c);
    }
    else{
        printf("No triple found.");
    }
}