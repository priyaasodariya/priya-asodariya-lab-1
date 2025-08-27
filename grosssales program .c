#include<stdio.h>
int main()
{
float grosssales ,netsales,allowance,deduction ;
printf("please enter grosssales:");
scanf("%f",&grosssales);
allowance=0.1*grosssales ;
deduction=0.03*grosssales ;
netsales=grosssales+allowance-deduction;
printf("netsales is:%.2f",netsales);
return 0;
}