#include<stdio.h>
void main()
{
    int n,c=0,i,sum=0,rem,sq=0;
    // printf("Enter a Number:");
    // scanf("%d",&n);
    for(i=1;i<=100;i++)
    {

    n=i;sum=0;c=0;
    while(n>0)
    {

        rem=n%10;
        sq=rem*rem;
        sum+=sq;
        //  printf("%d %d %d\n",sum,rem,sq);
        n/=10;
        //  printf("%d %d %d %d\n",sum,rem,sq,n);
         if(n==0)
         {
             n=sum;
             
            // printf("$%d\n\n",n);
            if(sum==1)
            {
               break;// c=15;
            }
            sum=0;
         }
         
        
        if(c==15)
        break;
        c++;
    }
    if(sum==1)
    {
        // printf("Happy Number");
        printf("%d\n",i);
    }
    // else
    // {
    //     // printf("Not Happy Number");
    // }
    }
}