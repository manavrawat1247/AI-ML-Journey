#include <stdio.h>
#include <math.h>
int main()
{
int a, b, c, d, root1, root2;
printf("Enter three numbers: ");
scanf("%d %d %d",&a,&b,&c);
d=(b*b)-(4*a*c);
if (d>0)
{ 
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/2*a) 
printf("Roots are real and different\n");
printf("Root 1=%d\n",root1);
printf("Root 2=%d\n",root2);
}
else if (d==0)
{
root1=-b/(2 * a);
printf("Roots are real and equal\n");
printf("Root1=Root2=%d\n",root1);
}
else
{
printf("Roots are imaginary\n");
}
}