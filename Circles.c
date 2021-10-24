#include<stdio.h>
#include<math.h>
void main()
{
    double x,y,r,a,b,r1;
    printf("Enter centre(x,y) of circle and radius:");
    scanf("%lf%lf%lf",&x,&y,&r);
    printf("Enter the points corrdinates:");
    scanf("%lf%lf",&a,&b);
    r1=sqrt(pow(x-a,2)+pow(y-b,2));
    if(r1>r)
    {
        printf("Outside the circle");
    }
    else if(r1<r)
    {
        printf("Inside the circle");
    }
    else
    {
        printf("On the circle");
    }
}