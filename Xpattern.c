#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the lenght of diagonals:");
    scanf("%d",&n);
    for(i=1;i<=(n*2)-1;i++)
    {
        for(j=1;j<=(n*2)-1;j++)
        {
            if(i==j||j==(n*2)-i)
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