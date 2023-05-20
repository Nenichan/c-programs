#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g;
    printf("enter ur 1st number:");
    scanf("%d",&a);
    b=20000+(a-2);
    printf("the ans is: %d \n" ,b);
    printf("enter ur 2nd number: ");
    scanf("%d",&c);
    d=9999-2;
    printf("my number is: %d " ,d);
    printf("\nenter ur 3rd number:");
    scanf("%d",&e);
    f=9999-e;
    printf("\nmy number is: %d\n",f);
    g=a+b+c+d+e+f;
    printf("ur 1st num is: %d \n" ,a);
    printf("ur 2nd num is: %d \n" ,c);
    printf("my 1st num is: %d \n" ,d);
    printf("ur 3rd num is: %d \n" ,e);
    printf("my 2nd num is: %d \n" ,f);
    printf("_____________________\n");
    printf("the ans is   : %d \n" ,b);
    printf("_____________________\n");
}