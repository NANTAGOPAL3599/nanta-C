#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("Enter the value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of n is:%d",fact);
return 0;
}
