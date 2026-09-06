#include<stdio.h>
int main()
{
int i,n,a;
printf("Enter array size:");
scanf("%d",&n);
int arr[n];
printf("Enter array elements:");
for(i=0;i<=n-1;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the element to be isnterted:");
scnaf("%d",&a);
int pos;
printf("Enter the position to be inserted on:");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
arr[i]=arr[i-1];
}
arr[pos-1]=a;
n++;
printf("New array:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
