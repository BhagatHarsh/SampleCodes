#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=8;j>=i;j--)
        {
            printf("*");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d*",i);
        }
        for(j=7;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}