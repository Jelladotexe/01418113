#include <stdio.h>
#include <stdlib.h>

int main(){
    int size, word_len,j=0,good_i=0;

    scanf("%d", &word_len);
    scanf("%d", &size);

    char **word = (char **)malloc(sizeof(char *)*size);
    

    for(int i =0;i<size;i++){
        word[i] = malloc(sizeof(char) *(word_len+1)); // [i] = ["fdfszf", "dzfzsdf"]
        scanf("%s",word[i]);
    }
    for(int j=1;j<size;j++){ // loop for each in ls
        int count = 0;
        for(int k=0;k<word_len;k++){ // loop every sigle pieces
            if(word[j][k] != word[j-1][k]){
                count +=1;
            }
        }
        if(count>2){
            break;
        }
        else{
            good_i = j;
        }
    }
    printf("%s",word[good_i]);
}