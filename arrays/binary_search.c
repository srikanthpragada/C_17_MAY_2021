// Binary Search
#include <stdio.h>

void main()
{
  int arr [] = {4,6,8,10,20,33,44,50,60,70};
  int sn = 60;
  int left = 0, right = 9, middle;


  while(left <= right)
  {
    // take middle element of the array
    middle = (left + right) / 2;

    printf("%d %d %d\n",left,right,middle);

    if (arr[middle] == sn)
    {
      printf("%d found at %d", sn, middle);
      break;
    }
    else
      if (arr[middle] > sn )
         right = middle - 1 ;
     else
         left = middle + 1;
  } // while

  // check whether number is not found
  if (left > right )
      printf("Sorry! Number not found!!");

}
