#include<stdio.h>
int main()
{
    int i,j,k=2,l,n;
    printf("Enter a Number:");
    scanf("%d",&n);
    l=n-1;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n)
            {
                printf("%d",j);
            }
            else if(j==n)
            {
                printf("%d",i);
            }
            else if(j==1)
            {
                 printf("%d",k);
                 k++;
            }
            else if(i==1)
            {
                 printf("%d",l);
                 l--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}