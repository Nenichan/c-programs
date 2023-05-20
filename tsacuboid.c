//hw3 TSA of cuboid

#include<stdio.h>
void main()
{
  
  
    int l,b,h,Tsa;
    printf("enter values :");
    scanf("%d%d%d",&l,&b,&h);
    Tsa=2*((l*b)+(b*h)+(h*l));
    printf("tsa of cuboid is %d",Tsa);
}