// Print all even numbers between two given numbers
#include <stdio.h>

void main()
{
 int i,n1,n2;

  printf("Enter first number :");
  scanf("%d",&n1);
  printf("Enter second number:");
  scanf("%d",&n2);

  if(n1 %2 !=0 )
    n1++;

  for(i=n1;i <= n2; i+=2 )
  {
      printf("%d ",i);
  }
}
