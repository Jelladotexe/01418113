#include <stdio.h>

void roman2arabic(char input[],char output[]){
    int i =0,j=0;
    int count = 0;
    while(input[i]!='\0'){
        if(input[i] == 'I'){
            count +=1;
        }
        else if(input[i] == 'V'){
            if(count<5){
                count = 5-count;
            }
            else{
                count +=5;
            }
        }
        else if(input[i] == 'X'){
            count += 9-1;
        }
        
        
        else if(input[i] != 'I' && input[i] != 'V' && count!=0){
            output[j] = count+48;
            j++;
            output[j] = input[i];
            j++;
            count = 0;
        }
        else{
            output[j] =input[i];
            j++;
        }
        i++;
    }
    if(count != 0){
        output[j] = count+48;
        j++;
    }
    output[j] = '\0';
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   fgets(input, 80, stdin);
   char *ch = input;
   while (*ch++ != '\n' || (*(--ch) = 0));

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}


