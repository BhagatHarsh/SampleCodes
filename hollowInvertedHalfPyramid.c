#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            k++;
            if(k==7||k==8||k==11)
            {
                printf("  ");
            }
            else
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}