#include<stdio.h>
int main()
{
int num,sum=0,rem;
printf("enter any digits");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("sum of individual digits %d\n",sum);
return 0;
}
