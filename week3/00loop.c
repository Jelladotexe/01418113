#include <stdio.h>
#include <stdlib.h>

int main(){
    // counting loop / counter-controlled loop


    // - while loopเพิ่มค่าตามจน.รอบ -
    int i = 0;
    while(i<10){
        printf("%d\n",i);
        i++;
    }

    // - while loop ลดค่าตามจน.รอบ -
    int n = 6;
    while(n--){ // postfix decrement operator
        printf("%d\n",n);
    }
    printf(">> %d\n",n); // n ค่าสุดท้ายหลังจบ loop

    printf("-----\n");

    int k = 6;
    while(--k){ // ลดค่าลงก่่อนค่อยตรวจสอบ // prefix decrement operator
        printf("%d\n",k);
    }
    printf(">> %d\n",k); // k ค่าสุดท้ายหลังจบ loop

    printf("---------------\n");

    // - for loop -
    int j = 100;
    for (int j = 0;j<10;j++){ // ถ้้าสร้างตัวแปร int j จะเกิด scope คือเราใช้ j ได้แค่ภายใน {} เท่านั้น
        printf("%d\n",j);
    }
    printf(">> %d\n",i);

    // - for loop - อีกแบบ
    char input[16];
    int y;
    int total = 0;
    for(;1;){
        fgets(input,16,stdin);
        y = atoi(input);
        if (y<-0) break;
        total +=y;
    }

    // - Conditional loop / sentinel loop / Indefinite loop - ไม่รู้จน.รอบ
    // เหมือน While True
    double temp = 35.0;
    while(1){
        if(temp<= 25.0)break;
        printf("Temperature: %.1lf\n", temp);
        temp -= 0.3;
    }
    printf(">> %.1f\n",temp); // last value ตอนออกจาก loop


    char string[] = "Hello";
    int s = 0;
    while(1){
        if (string[s] == '\0') break;
        printf("[%c]",string[s++]); 
    }
    printf("\n");
    // [H][e][l][l][o]


    // - do while - ทำไปก่อนค่อยตรวจสอบเงื่อนไข
    do{
        printf("Temp: %.1lf\n", temp);
        temp -= 0.3;
    } while(temp > 25.0);
    printf(">> %.1f\n", temp);
}