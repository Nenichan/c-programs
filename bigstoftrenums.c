#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is big",a);
    else
    if(b>a && b>c)
    printf("%d is big",b);
    else
    printf("%d is big",c);
}