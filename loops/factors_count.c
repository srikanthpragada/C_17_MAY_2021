// Program to print no. of factors

#include<stdio.h>

void main()
{
  int num,i,count=0;

   printf("enter number:");
   scanf("%d",&num);

   for(i=2;i <= num/2;i++)
   {
      if(num % i == 0)
         count++;
   }

   printf("Number of factors = %d",count);
}
