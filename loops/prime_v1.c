//Check whether a number is prime based on number of factors
#include <stdio.h>

void main()
{
 int  num,i,count = 0;

  printf("Enter number :");
  scanf("%d",&num);

  for(i=2;i <= num/2; i++)
  {
     if (num % i == 0)
         count ++;
  }

  if(count == 0)
    printf("Prime Number!");
  else
    printf("Not a prime number!");
}
