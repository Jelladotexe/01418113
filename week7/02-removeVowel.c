#include <stdio.h>

int remove_vowel(char *str)
{
    int i=0, j=0;
    while(str[i] != '\0'){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    return *str;
}

int main()
{  char str[80];

  printf(" Input: ");
  fgets(str, 80, stdin);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}
