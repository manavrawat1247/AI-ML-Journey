#include <stdio.h>
int main()
{
char i,j,str;
printf("Enter a character:");
scanf("%c",&str);
for(i='A';i<=str;i++)
{ 
for(j='A';j<=i;j++)
{
printf("%c",j);
}
printf("\n");
}}