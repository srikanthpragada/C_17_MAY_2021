// Print array in reverse order

#include <stdio.h>

void main()
{
  int ages [] = {19,30,45,78,34};
  int i;

     for(i = 4; i >= 0 ; i --)
     {
         printf("%5d", ages[i]);
     }

}
