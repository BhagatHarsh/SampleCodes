#include<stdio.h>
void main()
{
    char str[]="GOOD";
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}