#include<stdio.h>
void main()
{
    int i,a=3,b=-1,c=0,n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    
    }
}