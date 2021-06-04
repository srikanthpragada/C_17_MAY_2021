// Take ages from user and print them

#include <stdio.h>

void main()
{
  int ages[5];
  int i;

     for(i=0; i < 5; i ++)
     {
       printf("Enter age :");
       scanf("%d", &ages[i]);
     }

     for(i=0; i < 5; i ++)
     {
        printf("%5d", ages[i]);
     }

}
