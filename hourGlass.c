#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter a NUmber:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}