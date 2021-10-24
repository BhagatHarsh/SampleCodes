#include<stdio.h>
#include<string.h>
int st();

int main()
{
    int i,f;
    char str[30];
    printf("Enter a Number decimal or natural:");
    scanf("%s",&str);
   f=st(str);
     
    if(f==1)
    {
        printf("Natural");
    }
    else if(f==2)
    {
        printf("Decimal");
    }
    return 0;
    //  printf("\n%lf",i);
}
int st(char str[])
{
    int i,f=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='.')
        {
            f=2;break;
        }
        else
        {
           f=1;
        }
       

    }
    return f;
}