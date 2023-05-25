#include<stdio.h>
main()
{
    int n,i,j,q=0,r,p=0;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+2)
    {
        p=p+i;
    }
    for(j=2; j<=n; j=j+2)
    {
        q=q+j;
    }
    r=p-q;
    printf("the sum of %d numbers alternate series is %d\n",n,r);
}
