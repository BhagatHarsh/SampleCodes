#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3;
    double s1,s2;
    printf("Enter Three points (x,y):");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    s1=(y2-y1)/(x2-x1);
    s2=(y3-y2)/(x3-x2);
    if(s1==s2)
    printf("Straight line");
    else
    printf("non collinear points");
}