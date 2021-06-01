// Print count of digits
#include <stdio.h>

void main()
{
 int  num,digit, count = 0;

  printf("Enter number :");
  scanf("%d",&num);

  do
  {
     count ++;
     num = num / 10;    // Remove rightmost digit
  }
  while (num > 0);

  printf("Count = %d", count);
}
