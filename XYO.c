#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter (x,y):");
    scanf("%d%d",&x,&y);
    if(x==0 && y!=0)
    {
        printf("point lies on the Y-axis");
    }
    else if(y==0 && x!=0)
    {
        printf("point lies on the X-axis");
    }
    else if(x==0 && y==0)
    {
        printf("point lies on Oirgin");
    }
    else
    {
        printf("point lies on 2D plane");
    }
}