#include<stdio.h>
int main() 
{
int n,i,lar,sml;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter array elements:\n", n);
for(i=0;i<=n-1;i++) 
{
scanf("%d",&i)
}
lar=sml=arr[0];
for(i=0;i<=n-1;i++)
{
if(a[i]>lar)
lar=a[i];
if(a[i]<sml)
sml=a[i];
}
printf("Largest number in array:%d/n",lar);
printf("Smallest number in array:%d/n",sml);
}