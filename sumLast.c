#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=0,k,n,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);i=n;
    while(i>0)
    {
        sum=sum+i%10;
        i/=10;
        // printf("#%d",sum);
        
    }
    k=sum;
    while(k>0)
    {
        j++;
        k/=10;
        
    }
    sum=(n*pow(10,j))+sum;
    printf("NewNumber is %d",sum);
    return 0;
}