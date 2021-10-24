//Program8
#include<stdio.h>
void main()
{
    int rollno,S1,S2,S3,total,avg;
    printf("Enter Students\n 1)Rollno\n2)marksOfSubject 1,2 and 3\n");
    scanf("%d%d%d%d",&rollno,&S1,&S2,&S3);
    total=S1+S2+S3;
    avg=total/3;
    printf("Total marks and Average marks of Rollno %d is %d and %d.",rollno,total,avg);
}
