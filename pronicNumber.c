#include<stdio.h>
void main()
{
    int n,i,f=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n==i*(i+1))
        {
            f=1;break;
        }
    }
    if(f==1)
    {
        printf("PronicNumber");
    }
    else
    {
        printf("NotPronicNumber");
    }
}