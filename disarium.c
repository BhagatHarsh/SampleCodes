#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,rem,sum=0,rev=0,c=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        rem=i%10;
        rev=rev*10+rem;
        i/=10;
        
    }
    i=rev;printf("%d",rev);
    while(i>0)
    {
       rem=i%10;
        sum+=pow(rem,c);c++;
        i/=10;
         printf("\n%d",sum);
    }
    if(n==sum)
    {
        printf("Disarium Number");
    }
    else
     {
         printf("Not Disarium Number");
     }

}