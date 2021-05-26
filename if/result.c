// Take marks in two subjects and display result
#include<stdio.h>

void main()
{
 int m1,m2,total;

 printf("Enter first marks :");
 scanf("%d",&m1);
 printf("Enter second marks:");
 scanf("%d",&m2);

 total = m1 + m2;

 if(m1 > 50 && m2 > 50)
 {
   printf("Pass");
 }
 else
   if(total > 100)
   {
      printf("Pass");
   }
   else
   {
      printf("Fail");
   }
}
