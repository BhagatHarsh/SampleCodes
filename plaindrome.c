#include<stdio.h>
void main()
{
    int no,no1,rev=0,mod;
    printf("Enter a number:");
    scanf("%d",&no);
    no1=no;
    while(no>0)
    {
        mod=no%10;
        rev=rev*10 + mod;
        no=no/10;
    }
    if(rev==no1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}