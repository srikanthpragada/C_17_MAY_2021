// Print sum of digits
#include <stdio.h>

void main()
{
 int  num,digit, sum = 0;

  printf("Enter number :");
  scanf("%d",&num);

  while(num > 0)
  {
     digit = num % 10;  // Rightmost digit
     sum += digit;
     num = num / 10;    // Remove rightmost digit
  }

  printf("Sum = %d", sum);
}
