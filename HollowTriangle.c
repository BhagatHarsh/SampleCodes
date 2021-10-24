#include<stdio.h>
void main()
{
    int i,j,n=3;
    for(i=1;i<=6;i++)
    {
        for(j=6;j>=i;j--)
        {
            if(i==1||j==6||j==i)
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