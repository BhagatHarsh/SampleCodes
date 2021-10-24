#include<stdio.h>
void main()
{
    int n,i,sum=0,c=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        c++;
        n/=10;
    }
    n=c;
    while(c>0)
    {
        
        if(c==1||c==n)
        {
            sum+=i%10;
        }
        c--;
        i/=10;
    }
    printf("sum of first and last digit is:%d",sum);
}
