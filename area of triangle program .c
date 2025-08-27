#include<stdio.h>
int main()
{
    float h,l,area;
    printf("enter heghit of triangle in meter:");
    scanf("%f",&h);
    printf("enter leanth of triangle in meter:");
    scanf("%f",&l);
    area=(h*l)/2;
    printf("area of triangle is %.2fm^2",area);
    return 0;
}