//hw2 TSA of cylinder

#include<stdio.h>
void main()
{
    int r,h,Tsaclndr;
    printf("enter values:");
    scanf("%d%d",&r,&h);
    Tsaclndr=2*(22/7)*r*(h+r);
    printf(" tsa if cylinder = %d",Tsaclndr);
}