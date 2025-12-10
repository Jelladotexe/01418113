#include <stdio.h>
#include <stdlib.h>

int main(){
    char salary_str[10];
    float salary;
    float tax_to_pay;

    fgets(salary_str,10,stdin);
    salary = atof(salary_str);

    if (salary<0){
        printf("Error: Salary must be greater or equal to 0");
    }
    else if (salary <= 300000){
        tax_to_pay = salary * 0.05;
        printf("%.2f",tax_to_pay);
    }
    else{
        tax_to_pay = (salary - 300000)*0.1 + 15000;
        printf("%.2f",tax_to_pay);
    }

}