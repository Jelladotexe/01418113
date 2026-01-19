#include <stdio.h>
#include <stdlib.h>

int charcount(char *s)
{
    int i= 0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

void charweave(char *s,char *result)
{
    int n = charcount(s);
    int first =0, last = n-1;
    for(int i =0;i<n;i++){
        if(i%2==0){
            result[i] = s[first++];
        }
        else{
           result[i] = s[last--];
        }
    }
    for(int i=0;i<n;i++){
        result[n+i] = result[n-1-i];
    }
    result[n*2] = '\0';
}

int main()
{  char str[100],result[200];

   printf("String: ");
   fgets(str, 100, stdin);
   char *ch = str;
   while (*ch++ != '\n' || (*(--ch) = 0));
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}
