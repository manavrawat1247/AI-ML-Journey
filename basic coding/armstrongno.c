#include <stdio.h>
#include <math.h>
int main()
{
int n, d, m, sum = 0, c = 0;
printf("Enter a number: ");
scanf("%d", &n);
m = n;
while(m > 0)
{
c++;
m = m / 10;
}
m = n;   
while(m > 0)
{
d = m % 10;
sum = sum + pow(d, c);
m = m / 10;
}
if(sum == n)
printf("Armstrong number");
else
printf("Not an Armstrong number");
}