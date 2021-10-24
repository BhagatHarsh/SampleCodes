#include<stdio.h>
void main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int i,count=0,f=0;
    for(;n>0;)
    {
        if(n%2==0)
            n/=2;
        else if(n%3==0)
            n/=3;
        else if(n%5==0)
            n/=5;
        else if(n==1)
        {
            printf("ugly number");
            n=0;
        }
        else 
        {
            printf("not an ugly no");
            break;
        }
    }