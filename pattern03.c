#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(k=5;k>=i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=2;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}