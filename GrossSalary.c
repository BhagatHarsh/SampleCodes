#include<stdio.h>
void main()
{
    float BS,DA,HDR,GS;
    printf("Enter Basic Salary:");
    scanf("%f",&BS);
    if(BS<=10000 && BS>0)
    {
        HDR=0.2*BS;
        DA=0.8*BS;
    }
    else if(BS<=20000 && BS>10000)
    {
        HDR=0.25*BS;
        DA=0.9*BS;
    }
    else if(BS>20000)
    {
        HDR=0.3*BS;
        DA=0.95*BS;
    }
    else
    {
        printf("Enter proper value");
    }
    GS=BS+HDR+DA;
    printf("Gross Salary is \2 %f",GS);
}