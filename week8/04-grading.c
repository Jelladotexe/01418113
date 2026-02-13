#include <stdio.h>

struct collect_score{
    char id[12];
    int mid,final;
};
void calculateGrade(struct collect_score stu){
    int total =0;
    total = stu.mid + stu.final;
    if(total >= 80){
        printf("Student ID %s receives grade A.\n", stu.id);
    }
    else if(total >= 70 && total <= 79){
        printf("Student ID %s receives grade B.\n", stu.id);
    }
    else if(total >= 60 && total <= 69){
        printf("Student ID %s receives grade C.\n", stu.id);
    }
    else if(total >= 50 && total <=59){
        printf("Student ID %s receives grade D.\n", stu.id);
    }
    else{
        printf("Student ID %s receives grade F.\n", stu.id);
    }
}
int main(){
    struct collect_score students[5];

    for(int i =0;i<5;i++){
        printf("Enter Student ID: ");
        scanf("%s", students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].mid);
        printf("Enter Student Final: ");
        scanf("%d", &students[i].final);
    }
    for(int i=0;i<5;i++){
        calculateGrade(students[i]);
    }
}