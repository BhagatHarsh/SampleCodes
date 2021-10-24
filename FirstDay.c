#include<stdio.h>
void main()
{
   int ref_year=1900,leap=1900,year,diff_year,diff,lp=0,ch;
   long totalDays;
   printf("this program is to check for the first day of the year\n");
   printf("Enter Year greater than 1900:");
   scanf("%d",&year);
   diff_year=year-ref_year;
   diff=ref_year;

   while(diff<year)
   {
       if(leap%4==0)
       {
           lp++;
       }
       diff++;
       leap++;
   }
   totalDays=366*lp+365*(diff_year-lp)-1;
   ch=totalDays%7;
   switch(ch)
   {
        case 0:printf("monday");
        break;
        case 1:printf("Tuesday");
        break;
        case 2:printf("wednesday");
        break;
        case 3:printf("Thursday");
        break;
        case 4:printf("Friday");
        break;
        case 5:printf("Saturday");
        break;
        case 6:printf("Sunday");
        break;
        default:printf("Error");
   }

   



}