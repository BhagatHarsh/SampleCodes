#include<stdio.h>
void main()
{
    int i,j,k=0,l,m1,n1,m2,n2;
    printf("Enter the order of matrix 1:");
    scanf("%d%d",&m1,&n1);
    printf("Enter the order of matrix 2:");
    scanf("%d%d",&m2,&n2);
    int a[m1][n1],b[m2][n2],c[m1][n2];
    if(n1==m2)
{

    
    printf("Enter the elements of first matrix:");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
     printf("Enter the elements of second matrix:");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
           
            c[i][j]=0;
            for(k=0;k<m2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
     for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");

    }
}
else
{
    printf("Enter valid matrices order");
}
   

}