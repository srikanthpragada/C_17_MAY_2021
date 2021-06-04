// Create 10 elements array and fill it with random numbers

#include <stdio.h>

void main()
{
  int arr[10];
  int i;

     srand(time(0)); // Initialize random seed

     for(i = 0; i < 10 ; i ++)
     {
         arr[i] = rand() % 1000;
         printf("%d\n", arr[i]);
     }

}
