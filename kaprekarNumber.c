#include<stdio.h>
#include<math.h>
void main()
{
    long n,a,b=0,c;
    printf("enter n:");
    scanf("%ld",&n);
    long sq=n*n,i,rem,div;
    a=sq;

    while(a>0)
    {
        b++;
        a/=10;
    }
    c=pow(10,b-1);
    printf("%ld",b);
    while(b-1>0)
    {

        rem=sq%c;
        div=sq/c;
        if(n==(rem+div))
        {
            printf("kaprekar number");
            sq=1;
            break;
        }
        c/=10;
        b--;

    }
    if(sq!=1)
    {
        printf("not a kaprekar number");
    }

}