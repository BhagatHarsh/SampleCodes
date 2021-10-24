#include<stdio.h>
void main()
{
    int n,prod=1,sum=0,n1;
    printf("Enter a Number:");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        sum=sum+n%10;
        prod=prod*(n%10);
        n/=10;
    }
    if(n1==(sum+prod))
    {
        printf("SpecialTwoDigit");
    }
    else
    {
        printf("Not Special");
    }
}