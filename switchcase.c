#include<stdio.h>
#include <stdlib.h>
void main()
{
    int a,b,c,ch;
    printf("enter any two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nu can perform the following options");
    printf("\n1.addition");
    printf("\n2.subtraction");
    printf("\n3.multiplication");
    printf("\n4.division");
    printf("\n5.exit");
    printf("\nchoose ur choice:");
    scanf("%d",&ch);
    switch(ch)
{
case 1:
c=a+b;
printf("the sum of two nums %d",c);
break;

case 2:
c=a-b;
printf("the difference of two nums %d",c);
break;

case 3:
c=a*b;
printf("the product of two nums %d",c);
break;

case 4:
c=a/b;
printf("the quocient of two nums %d",c);
break;

case 5:
exit(0);
break;

default:
printf("u stupid enter the correct option");
break;
}
}