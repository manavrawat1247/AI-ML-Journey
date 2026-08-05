#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter two number");
scanf("%d %d",&n1,&n2);
int rem1=n1%10;
int rem2=n2%10;
int q1=n1/10;
int q2=n2/10;
printf("The quotient for first number is: %d\n",q1);
printf("The quotient for second number is: %d\n",q2);
printf("The remainder for first number is: %d\n",rem1);
printf("The remainder for second number is: %d\n",rem2);
}
