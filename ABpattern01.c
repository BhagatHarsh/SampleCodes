#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d",i);
            }
            else
            {
                printf("%c",i+64);
            }
        }
        printf("\n");
    }

}