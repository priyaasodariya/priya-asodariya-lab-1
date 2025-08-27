#include<stdio.h>
int main()
{
int maths,physic,chemistry;
int totalmarks,average;
scanf("%d %d %d " &maths,&physics,&chemistry);
totalmarks=maths+physics+chemistry;
printf("totalmarks=%d/n");
average=totalmarks/3;
printf("average marks=%d",average);
return 0;
}