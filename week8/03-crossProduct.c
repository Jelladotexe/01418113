#include <stdio.h>

struct vector{
    float x,y,z;
};

int main(){
    struct vector u,v;
    float first,second,third;
    printf("Enter u: ");
    scanf("%f %f %f", &u.x,&u.y,&u.z);
    printf("Enter v: ");
    scanf("%f %f %f", &v.x,&v.y,&v.z);
    
    first = (u.y * v.z) - (u.z*v.y);
    second = (u.z*v.x) - (u.x*v.z);
    third = (u.x * v.y) - (u.y*v.x);
    printf("u x v = %.1f %.1f %.1f",first,second,third);
}