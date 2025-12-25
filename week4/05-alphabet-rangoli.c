#include <stdio.h>
#include <stdlib.h>


void up(int n, int cal){
    int startcal = cal;
    for(int i=0;i<n;i++){
        //left
        for(int j=0;j<2*n-1;j++){
            if(2*n-1-j < 2*(i+1) && j%2==0){ 
                printf("%c",cal);
                cal--;
            }
            else{
                printf("-");
            }
        }
        cal += 2;
        // right
        for(int k=0;k<2*n-2;k++){
            if(k+1 <= 2*i && k%2!=0){
                printf("%c",cal);
                cal++;
            }
            else{
                printf("-");
            }
        }
        printf("\n");
        cal = startcal;
    }
}
void down(int n,int cal){
    int startcal = cal;
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<2*n-1;j++){
            if(2*n-1-j < 2*(i+1) && j%2==0){ 
                printf("%c",cal);
                cal--;
            }
            else{
                printf("-");
            }
        }
        cal += 2;
        for(int k=0;k<2*n-2;k++){
            if(k+1 <= 2*i && k%2!=0){
                printf("%c",cal);
                cal++;
            }
            else{
                printf("-");
            }
        }
        printf("\n");
        cal = startcal;
    }
}

int main(){
    char n_str[5];
    int n,cal;

    fgets(n_str,5,stdin);
    n = atoi(n_str);

    cal = 97 +n-1;
    if(n<=0 || n>26){
        printf("-");
    }
    else{
        up(n,cal);
        down(n,cal);
    }
}