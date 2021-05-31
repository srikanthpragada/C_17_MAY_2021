// Display sum of numbers until 0 is given
#include <stdio.h>

void main()
{
 int  num,total = 0;

  while(1)  // Always true
  {
      printf("Enter number [0 to stop] :");
      scanf("%d",&num);
      if (num == 0)
         break;

      total += num;
  }

  printf("Total = %d", total);
}
