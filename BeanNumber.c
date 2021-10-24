#include<stdio.h>
void main()
{
    int i,j,n,squareSum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        squareSum+=((n%10)*(n%10));
        n/=10;
    }
    if(squareSum>i)
    {
        printf("Bean Number");
    }
    else
    {
        printf("Not Bean Number");
    }
}