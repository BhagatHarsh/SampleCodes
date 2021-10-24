#include<stdio.h>
void main()
{
    int i,j,k,l,n;
    printf("Enter a Number:");
    scanf("%d",&n);
    k=4*(n-1);l=4*(n-1)-n+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1)
            printf("%d ",j);
            else if(j==n)
            printf("%d ",i+n-1);
            else if(j==1)
            printf("%d ",k--);
            else if(i==n)
            printf("%d ",l--);
            else
            printf("  ");
        }
        printf("\n");
    }
}