#include<stdio.h>

void main()
{
    int i,j,k,n,sumDigi=0,primeFc=0,c=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        sumDigi+=i%10;
        i/=10;
    }
    // printf("#%d\n",sumDigi);
    for(j=n-1;j>1;j--)
    {
        c=0;
        for(i=1;i<=j;i++)
        {
            if(j%i==0)
            c++;
        }
     
      if(c==2 && n%j==0)
      {
          k=j;
        while(k>0)
        {
         primeFc+=k%10;
         k/=10;
        }

         
           
      }
      
    }
    
    if(sumDigi==primeFc)
    {
        printf("SmithNumber");
    }
    else
    {
        printf("NotSmithNumber");
    }

}
