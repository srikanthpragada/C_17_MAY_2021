// Print marks and highest marks for each row
#include <stdio.h>

void main()
{
  int a[10][5];
  int r,c, highest;

     srand(time(0));

     for(r = 0;r < 10; r ++)
     {
         highest = 0;
         for (c = 0;c < 5; c ++)
         {
             a[r][c] = rand() % 100;
             printf("%5d", a[r][c]);
             if(a[r][c] > highest)
                 highest = a[r][c];
         }

         printf("%5d\n", highest);
     }



}
