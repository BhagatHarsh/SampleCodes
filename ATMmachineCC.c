#include<stdio.h>
void main()
{
    float x,y;
    printf("Enter amount to be withdrawn and your current bank balance(<2000):");
    scanf("%f%f",&x,&y);
    if(x>0&&y>0&&x<2000&&y<2000&&(int)x%5==0)
    {
        printf("Current balance in your account is:%.2f",y-x-0.5);
    }
    else{
        printf("Enter amount less than 2000");
    }
}