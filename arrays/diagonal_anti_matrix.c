// 1s in diagonal and anti-diagonal elements, 0 for rest

#include <stdio.h>

void main()
{
  int a[5][5];
  int r,c;

     for(r = 0;r < 5; r ++)
     {
         for (c = 0;c < 5; c ++)
         {
             if(r == c || r + c == 4)
                a[r][c] = 1;
             else
                a[r][c] = 0;

             printf("%5d", a[r][c]);
         }

         printf("\n");
     }



}
