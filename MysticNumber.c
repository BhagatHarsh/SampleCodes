#include<stdio.h>
int main()
{
    int n,n1,sum=0,rem;
    printf("enter value of n\n");
    scanf("%d",&n);
    n1=n;
    while(n>9)
    {
        n1=n;
        rem=0;
        sum=0;
        while(n1>0)
        {
            rem=n1%10;
            sum+=rem;
            n1/=10;
        }
        n=sum;
    }
    if(sum==3)
    printf("mystic");
    else
    printf("notmystic");
    return 0;
}