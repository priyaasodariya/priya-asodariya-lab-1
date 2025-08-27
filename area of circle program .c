#include<stdio.h>
int main()
{
    float r,area;
    printf("enter redius of circle in meter:");
    scanf("%f",&r);
    area=(22*r*r)/7;
    printf("area of circle is %.2fm^2",area);
    return 0;
}