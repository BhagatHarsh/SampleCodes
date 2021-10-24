#include<stdio.h>
void main()
{
    int n,i,j,min;
    printf("Enter a Number:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j+1]<a[j])
            {
                min=a[j];
                a[j]=a[j+1];
                a[j+1]=min;
                
            }
    //         if(a[n-1]<a[0])
    // {
    //     min=a[n-1];
    //     a[n-1]=a[0];
    //     a[0]=min;
    // }
        }
    }
    printf("sorted array is:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}