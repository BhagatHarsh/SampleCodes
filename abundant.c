#include<stdio.h>
void main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum>n)
    printf("abundant number");
    else
    printf("not an abundant number");
}