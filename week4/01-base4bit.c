#include <stdio.h>
#include <stdlib.h>

int bina(int n){
    int checkInt = 8, biInt = 0;

    for(int i =0;i<4;i++){
        biInt += (checkInt & n) != 0;
        biInt *= 10;
        checkInt >>=1;
    }
    biInt = biInt/10;

    return biInt;
}
int main(){
    char n_str[4];
    int n;

    fgets(n_str,4,stdin);
    n = atoi(n_str);

    printf("Binary number of %d is %04d.",n, bina(n));


}