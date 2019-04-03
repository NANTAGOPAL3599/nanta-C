#include<stdio.h>
void main()
{
    int min,hr=0;
    scanf("%d",&min);
    while(min>=60)
    {
        hr=hr+1;
        min=min-60;
    }
    printf("%d %d",hr,min);
getch();
}
