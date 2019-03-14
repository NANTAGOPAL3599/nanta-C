#include <stdio.h>
void main()
{
int a[50],i, j,n,t;
printf("n value"); 
scanf("%d", &n);
printf("Elements ");
for(i=0; i<n; i++)
{
scanf("%d", &a[i]);
}
for(i=0; i<n; i++)
{
for(j=i+1; j<n; j++)
{
if(a[i] > a[j])
{
t=a[i];
a[i] = a[j];
a[j] = t;
}
}
}
for(i=0; i<n; i++)
{
printf(" %d ", a[i]);
}
getch();
}
