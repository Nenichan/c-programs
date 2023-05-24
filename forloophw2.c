#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,p;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        p=p+pow(i,3);
    }
    printf("the sum of cube of %d is %d\n",n,p);
}