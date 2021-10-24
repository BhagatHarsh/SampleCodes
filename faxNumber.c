#include<stdio.h>
int main()
{
    int n,n1,sum=0,rem;
    printf("enter value of n\n");
    scanf("%d",&n);
    n1=n;
        while(n>0)
        {
            rem=n%10;
            sum+=rem;
            n/=10;
        }

    if(n/sum==0)
    printf("fax");
    else
    printf("notfax");
    return 0;
}       