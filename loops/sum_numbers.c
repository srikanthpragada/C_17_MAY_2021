// Print sum of odd numbers from 1 to given number
#include <stdio.h>

void main()
{
 int  num,i, sum = 0;

  printf("Enter number :");
  scanf("%d",&num);

  for(i = 1;i <= num; i += 2)
  {
     sum += i;
  }

  printf("Sum = %d",sum);
}
