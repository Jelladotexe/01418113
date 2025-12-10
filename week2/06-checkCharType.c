#include <stdio.h>
#include <stdlib.h>

int main(){
    char letter_str[3];
    int ascii_value;

    fgets(letter_str,3,stdin);

    ascii_value = (int)letter_str[0];

    if (ascii_value >= 'A' && ascii_value <='Z'){
        printf("Output: upper case");
    }
    else if (ascii_value >= 'a' && ascii_value <= 'z'){
        printf("Output: lower case");
    }
    else if (ascii_value >= '0' && ascii_value <= '9'){
        printf("Output: digit");
    }
    else{
        printf("Output: others");
    }
}