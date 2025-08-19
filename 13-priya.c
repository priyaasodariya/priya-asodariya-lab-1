#include<stdio.h>
int main()
{
int byte;
int KB,MB,GB;
printf("please enter byte");
scanf("%d",&byte);
KB = byte/1024;
printf("%d KB\n",KB);
MB=KB/1024;
printf("%d MB\n",MB);
GB=MB/1024;
printf("%d GB\n",GB);
return 0;

}
