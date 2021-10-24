#include<stdio.h>
//int fac();
void main()
{
    int n,n1,rem,f=1,i,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        rem=n%10;
        for(i=rem;i>=1;i--)
        {
            f=f*i;
        }
        sum+=f;
        f=1;
        n/=10;


    }
    if(sum==n1)
    printf("SpecialNumber");
    else
    printf("NotSpecialNumber");

    
}