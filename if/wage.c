// Calculate wage based on day and no. of hours worked

#include<stdio.h>

void main()
{
 int nohours, weekday, rate;

  printf("Enter weekday(1-7) :");
  scanf("%d",&weekday);

  printf("Enter hours :");
  scanf("%d",&nohours);

  switch(weekday)
  {
   case 1:
   case 2:
   case 3:
   case 4: rate = 100;
           break;
   case 5: rate = 150;
           break;
   case 6: rate = 200;
           break;
   default:rate = 250;   // Sunday
  }

  printf("Wage = %d", rate * nohours);
 }



