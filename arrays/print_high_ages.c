// Take ages from user and print them

#include <stdio.h>

void main()
{
  int ages [] = {19,30,45,78,34,50,67,56,87,90};
  int i;

     for(i=0; i < 10; i ++)
     {
        if (ages[i] >= 60)
           printf("%5d", ages[i]);
     }

}
