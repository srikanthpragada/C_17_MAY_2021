// Display no. of days in the given month using switch
#include<stdio.h>

void main()
{
 int month, nodays;

 printf("Enter month number [1-12] :");
 scanf("%d",&month);

 switch(month)
 {
     case 2: nodays = 28;
             break;
     case 4:
     case 6:
     case 9:
     case 11:nodays = 30;
             break;
     default:nodays = 31;
 }

 printf("No. of days = %d", nodays);


}
