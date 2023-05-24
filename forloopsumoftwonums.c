#include<stdio.h>
void main()
{
    int i,n,p=0;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        p=n+i;
        printf("%d+%d=%d\n",n,i,p);
    }
}