//hw5 volume of cone

#include<stdio.h>
void main()
{
    int r,h,cv;
    printf("enter values:");
    scanf("%d%d",&r,&h);
    cv=(1/3)*(22/7)*r*r*h;
    printf(" cone volume = %d",cv);
}