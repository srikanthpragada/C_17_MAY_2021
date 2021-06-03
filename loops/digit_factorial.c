// Print factorial for each digit of a number

#include<stdio.h>
void main()
{
 int i,fact, digit, num;

  printf("Enter a number :");
  scanf("%d",&num);


  while(num > 0)
  {
      digit = num % 10;

      // Calculate factorial
      fact = 1;
      for(i=1; i <= digit; i ++)
      {
          fact = fact * i;
      }
      printf("Factorial of %d is %d\n",digit,fact);

      num = num / 10;
  }

}
