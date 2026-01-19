#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* stoupper(const char s[]) {
    int i =0,size;

    while(s[i]!='\0'){
        size++;
        i++;
    }
    char *arr = (char *)malloc(sizeof(arr)*(size+1)); //string need2 +1

    i=0;
    while(s[i]!='\0'){
        arr[i] = toupper(s[i]);
        i++;
    }
    arr[i] = '\0';
    return arr;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}