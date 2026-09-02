#include<stdio.h>
int main() 
{
int n,i,sum=0;
float average;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter array elements:\n", n);
for(i=0;i<=n-1;i++) 
{
scanf("%d", &arr[i]);
sum=sum+arr[i];
}
average=sum/n;
printf("Sum = %d\n", sum);
printf("Average = %.2f\n", average);
}
