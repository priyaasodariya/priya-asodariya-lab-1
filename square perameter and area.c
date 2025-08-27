#include<stdio.h>

int main()
{
    float l,area,p;
    printf("enter leanth of square in meter:");
    scanf("%f",&l);
    p=4*l;
    printf("perameter of square is:%.2f m\n",p);
    area=l*l;
    printf("area of square is %.2fm^2",area);
    return 0;
}