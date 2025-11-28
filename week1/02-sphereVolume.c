#include <stdio.h>
#include <stdlib.h>

#define PI 22.0/7

int main()
{
    float radius = 1.5;
    float v = (4 *PI * radius*radius*radius)/3;
    printf("The volume of this sphere is %.2f",v);
    
    return 0;
}