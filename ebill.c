#include<stdio.h>
void main()
{
    char name[20];
    int sno,pr,cr,units;
    float amt,tax,bill;
    printf("enter costumer name:");
    scanf("%s",&name);
    printf("enter service number:");
    scanf("%d",&sno);
    printf("enter previous reading:");
    scanf("%d",&pr);
    printf("enter current reading:");
    scanf("%d",&cr);
    units=pr-cr;
    if(units>0 && units<=50)
        amt=units*2.40;
    else if(units>50 && units>=100)
        amt=units*3.40;
    else if(units>100 && units>=300)
        amt=units*5;
    else if(units>300 && units<=50)
        amt=units*7;
    else if(units>500);
        amt=units*10;
    
    tax=(10*amt)/100;
    bill=amt+tax;
    printf("\ncostumer name       :%s\n",name);
    printf("service number      :%d\n",sno);
    printf("privious reading    :%d\n",pr);
    printf("current reading     :%d\n",cr);
    printf("units               :%d\n",units);
    printf("amount              :%f\n",amt);
    printf("tax                 :%f\n",tax);
    printf("--------------------------------\n");
    printf("bill                :%f\n",bill);
    printf("--------------------------------\n");
}
