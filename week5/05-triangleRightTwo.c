#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[5];
    int n;

    printf("Enter n: ");
    fgets(n_str,5,stdin);
    n = atoi(n_str);

    for(int i=0; i<n-1;i++){
        printf("-");
        for(int j=1;j<=i;j++){ // ส่วนของแถวแนวนอนว่าจะพิมไร
            if(j%2 != 0){
                printf("x");
            }
            else if(j%2==0){
                printf("-");
            }
        }
        printf("\n");
       
    }
    for(int i=0; i<n;i++){
        printf("-");
        for(int j=1;j<n-i;j++){ // ส่วนของแถวแนวนอนว่าจะพิมไร
            if(j%2 != 0){
                printf("x");
            }
            else if(j%2==0){
                printf("-");
            }
        }
        printf("\n");
       
    }

}