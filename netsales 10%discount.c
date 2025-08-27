#include<stdio.h>
int main()
{
float net,gross;
scanf("%f",&gross);
net=gross-(0.1*gross);
printf("%f net sales",net);
return 0;
}