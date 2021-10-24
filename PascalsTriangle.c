#include<stdio.h>
int fac(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
            f=f*i;    
    }
    return f;
}
void main()
{
    int i,j,k,n, coeff=0;
    printf("enter the power of binomial to get its coeefficients:");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            coeff=(fac(i))/(fac(k)*fac(i-k));
            printf("%d ",coeff);
        }
        printf("\n");
    }
}