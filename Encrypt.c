#include<stdio.h>

void main()
{
    int i,j=0,n,crypt=0,rem;
    printf("Enter a Number:");
    scanf("%d",&n);i=n;
   
    while(n>0)
    {
        rem=n%10;
        if(rem%2==0)
        {
            rem++;
        }
        else
        {
            rem--;
        }
       
        crypt=rem+crypt*10;
        n/=10;
    }
    j=crypt;crypt=0;
    while(j>0)
    {
        rem=j%10;
        
        j/=10;
        
        crypt=crypt*10+rem;     
    }
    if(i%10==1)
    {
        crypt=crypt*10;
    }

    printf("Encrypted Number is:%d",crypt);

}