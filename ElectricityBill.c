//program to calculate Electricity bill
#include<stdio.h>
void main()
{
    int cusID,units;
    double amt=0.0;
    printf("Enter your CustomerID and Units Used:");
    scanf("%d%d",&cusID,&units);
    if(units<=199)
    {
        amt=units*1.20;
    }
    else if(units>=200 && units<400)
    {
        amt=units*1.50;
    }
    else if(units>=400 && units<600)
    {
        amt=units*1.80;
    }
    else 
    {
        amt=units*2.00;
    }
    if(amt>400)
    {
        amt = amt+ amt*0.15;
    }
    printf("ElectricityBill of %d user is %lf",cusID,amt);
}