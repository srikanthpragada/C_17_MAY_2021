#include <stdio.h>

// Macro
#define iseven(n)  n % 2 == 0

void main()
{
  int a = 10;

     if(iseven(a))   // a % 2 == 0
         printf("Even");

}
