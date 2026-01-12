#include <stdio.h>

int main(){
    char word[100];
    int count=0,len=0,i=0;
    printf("String (without a space): ");
    scanf("%s",word);
    
    while(word[i] != '\0'){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            printf("%c ",word[i]);
            count++;
        }
        i++;
    }
    if(count>1){
        printf("\nThis string contains %d vowels.",count);
    }
    else{
        printf("\nThis string contains %d vowel.",count);
    }
    return 0;
}