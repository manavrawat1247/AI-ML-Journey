#include<stdio.h>
int main()
{
int n1,d,sum=0;
printf("Enter a number:");
scanf("%d",&n1);
while(n1>0)
{
d=n1%10;
sum=sum+d;
n1=n1/10;
}
printf("sum:%d\n",sum);
return 0;
}