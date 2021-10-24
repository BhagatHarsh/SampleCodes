#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i)-1;k++)
        {
            if(k==1||k==(2*i)-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(k=(2*i)-1;k>=1;k--)
        {
            if(k==(2*i)-1||k==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}