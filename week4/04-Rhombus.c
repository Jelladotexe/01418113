#include <stdio.h>
#include <stdlib.h>

void print_space(char space, int amount){
    for(int i =0; i<amount;i++){
        printf("%c",space);
    } 
}
void same_star(int amount){
    for(int i =0; i<amount;i++){
        printf("%c",'*');
    }
}
int main(){
    char a_str[5],b_str[5], star='*',space=' ';
    int a,b;

    fgets(a_str,5,stdin);
    fgets(b_str,5,stdin);

    a = atoi(a_str);
    b = atoi(b_str);
    
    same_star(a);
    printf("\n");
    for(int i =0; i<b-2;i++){
        for(int j =0;j<=i;j++){
            printf("%c",space);
        }
        printf("*");
        print_space(' ',a-2);
        printf("*");
        printf("\n");
    }
    print_space(' ',b-1);
    same_star(a);
}