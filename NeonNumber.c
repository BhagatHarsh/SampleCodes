#include<stdio.h>
void main()
{
    int n,sq=0,rem=0,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        rem=sq%10;
        sum+=rem;
        sq/=10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("NotNeonNumber");
    }
}