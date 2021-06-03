// Print largest factor other than number
// For prime numbers, print 1

#include<stdio.h>
void main()
{
 int num,i;

  printf("Enter number : ");
  scanf("%d",&num);

  for(i = num/2; i > 0 ;i--)
  {
    if(num % i == 0)
    {
      printf("Largest factor is %d",i);
      break;
    }
  }
}
