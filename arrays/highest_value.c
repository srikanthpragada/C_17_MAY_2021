// Print location of highest value in 5 x 5 array
#include <stdio.h>

void main()
{
  int a[5][5];
  int r,c, highest, hr, hc;

     srand(time(0));
     highest = hr = hc = 0;

     for(r = 0;r < 5; r ++)
     {
         for (c = 0;c < 5; c ++)
         {
             a[r][c] = rand() % 100;
             printf("%5d", a[r][c]);
             if(a[r][c] > highest)
             {
               highest = a[r][c];
               hr = r;
               hc = c;
             }
         }
         printf("\n");
     }

     printf("\nHighest value %d is at %d,%d\n", highest,hr,hc);
}
