#include<stdio.h>
void main()
{
    int i,n,p=0;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        p=n+i;
        printf("the sum of %d is %d\n",n,p);
    }
}
