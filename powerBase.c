#include<stdio.h>
void main()
{
    double pow,base,i,ans=1;
    printf("Enter Power and Base:");
    scanf("%lf%lf",&pow,&base);
   
     if(pow>0)
    {
        for(i=1;i<=pow;i++)
    {
        ans=ans*base;
    }

    }
    else if(pow<0)
    {
        for(i=pow;i<0;i++)
    {
        ans=ans/base;
    }
    }
    printf("Answer is %lf",ans);


}