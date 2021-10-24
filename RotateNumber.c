#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,k=0,n,b,e;
    printf("Enter a Number:");
    scanf("%d",&n);i=n;
    while(i>0)
    {
        k++;
        i/=10;
    }
   j=pow(10,k-1);
    for(i=1;i<=k;i++)
    {
        e=((n%j)*10)+(n/j);
         
        printf("%d ",e);
        n=e;
        
    }
}