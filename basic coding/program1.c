#include<stdio.h>
int main()
{
int sum=0;
for (int i=1;i<=5;i++)
{
if(i%5==0||i%3==0)
{
sum=sum+i;
}
}
printf("%d",sum);
}
























