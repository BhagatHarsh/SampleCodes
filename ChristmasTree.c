#include<stdio.h>
void main()
{
    int l,i,j,k;
    for(i=1;i<4;i++)
    {
        for(j=6;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
       for(l=i-1;l>=1;l--)
       {
           printf("*");
       }
        printf("\n");
    }
    //1
    
     for(i=1;i<6;i++)
    {
        for(j=6;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
       for(l=i-1;l>=1;l--)
       {
           printf("*");
       }
        printf("\n");

    }//2
     for(i=1;i<8;i++)
    {
        for(j=6;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
       for(l=i-1;l>=1;l--)
       {
           printf("*");
       }
        printf("\n");
        

    }//3
    for(j=1;j<=3;j++)
    {
         for(i=1;i<10;i++)
    {
        if(i==6 || i==8)
        {
            printf("|");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
    }
    
    

}