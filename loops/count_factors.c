// Ccount all factors for the given number
#include <stdio.h>

void main()
{
 int  num,i, count = 0;

  printf("Enter number :");
  scanf("%d",&num);

  for(i=2;i <= num/2; i++)
  {
      if (num % i == 0)
         count ++;
  }
  printf("No. of factors = %d", count);
}
