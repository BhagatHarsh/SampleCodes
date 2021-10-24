#include<stdio.h>
void main()
{
    int qn,dis=0;
    float total,rate;
    printf("Enter qn and rate:\n");
    scanf("%d %f",&qn,&rate);
    
    if(qn>1000)
    {
        dis=10;
        total=qn*rate-qn*rate*dis/100;
    }
    else
    {
        total=qn*rate;
    }
    printf("Total amount to be paid is: %f",total);
}