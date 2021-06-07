// Print marks and total of each row
#include <stdio.h>

void main()
{
  int a[10][5];
  int r,c, total;

     srand(time(0));

     for(r = 0;r < 10; r ++)
     {
         total = 0;
         for (c = 0;c < 5; c ++)
         {
             a[r][c] = rand() % 100;
             printf("%5d", a[r][c]);
             total += a[r][c];
         }

         printf("%5d\n", total);
     }



}
