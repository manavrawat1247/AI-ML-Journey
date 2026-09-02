#include<stdio.h>
int main() 
{
int n,i,x,c=0;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter array elements:\n", n);
for(i=0;i<=n-1;i++) 
{
scanf("%d",&i)
}
printf("Enter the number to be searched:");
scanf("%d",&x);
for(i=0;i<=n-1;i++) 
{
if(a[i]==x)
{
printf("Number found");
c=1;
break;
}}
if(c=0)
printf("Number not found");
}