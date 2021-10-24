#include<stdio.h>
void main()
{
    int i,n,c=0;
    // printf("Enter a Number");
    // scanf("%d",&n);
    for(n=1;n<=100;n++)
    {
        c=0;
        for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    printf("%d\n",n);
    // if(c==2)
    // {
    //     printf("Prime number");
    // }
    // else
    // {
    //     printf("not Prime number");
    // }
    }
    

}