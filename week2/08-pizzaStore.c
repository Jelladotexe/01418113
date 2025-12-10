#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char size_str[3], p_str[3],c_str[3],m_str[3];
    int dia;
    float price,cost,extracost=0.0;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size_str,3,stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(p_str,3,stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(c_str,3,stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(m_str,3,stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int size = atoi(size_str);
    int p = atoi(p_str);
    int c = atoi(c_str);
    int m = atoi(m_str);

    // diameter
    if (size == 1){
        dia = 10;
    }
    else if (size == 2){
        dia = 16;
    }
    else{
        dia = 20;
    }
    // extracost
    if (p == 1){
        extracost += 0.5;
    }
    if (c == 1){
        extracost += 0.25;
    }
    if (m == 1){
        extracost += 0.30;
    }

    // cal สูตร
    float area = (M_PI * dia * dia) / 4.0;
    cost = 5 + (2*area) + (extracost*area);
    price = 1.5 * cost;

    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.");
}

