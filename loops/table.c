// Program to table up to 10 for the given number

#include <stdio.h>

void main()
{
 int i,n;

     printf("Enter a number :");
     scanf("%d",&n);

     for(i = 1; i <= 10; i ++)
     {
         printf("%2d * %2d = %3d\n",n,i, n * i);
     }
}
