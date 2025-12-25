#include <stdio.h>
#include <stdlib.h>

int main(){
    char goal_str[20],tdy_str[20];
    float goal,tdy,need,total=0;
    int day=0;

    printf("Enter your goal amount: ");
    fgets(goal_str,20,stdin);
    goal = atof(goal_str);
    need = goal;

    while(need > 0){
        printf("Enter money collected today: ");
        fgets(tdy_str,20,stdin);
        tdy = atof(tdy_str);
        need -=tdy;
        total += tdy;
        day+=1;
        if(need>0){
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",day,total,need);
        }
    }
    if(day == 1){
        printf("Congratulations! You take %d day to reach your goal.\n",day);
    }
    else{
        printf("Congratulations! You take %d day to reach your goal.\n",day);
    }

}