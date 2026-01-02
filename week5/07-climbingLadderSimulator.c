#include <stdio.h>
#include <stdlib.h>

void print_format(int n, int pos){
    for(int j=0;j<n;j++){
        if(j==pos){
            printf("|-O-|\n");
        }
        else if(j == pos+1){
            printf("|-^-|\n");
        }
        else{
            printf("|---|\n");
        }
    }
    
}
int main(){
    char n_str[14],s_str[14];
    int n,s,pos,step,round=1;
    printf("Input number of stairs: ");
    fgets(n_str,14,stdin);
    n = atoi(n_str);
    

    pos = n-2;
    while(1){
        if(s == 0){
            break;
        }
        printf("---- round %d ----\n",round);
        round +=1;
        print_format(n,pos);

        printf("Input step command: ");
        fgets(s_str,14,stdin);
        s = atoi(s_str);
        pos -= s;
        if(pos>n-2){ // เท้าจะสิ้น
            pos = n-2;
        }
        else if(pos<0){ // ติดเพดาน
            pos = 0;
        }
    }

}