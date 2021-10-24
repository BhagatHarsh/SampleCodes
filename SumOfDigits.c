#include<stdio.h>
void main()
{
    int no,sum=0;
    printf("Enter a 4 digit number:");
    scanf("%d",&no);
    sum=no%10+no/1000;
    printf("Sum is %d",sum);
    
}