// Take a char and display its type
#include <stdio.h>

void main()
{
  char ch;

      printf("Enter an alpha :");
      ch = getchar();

      if( isupper(ch) )    //  (ch >= 'A' && ch <= 'Z')
         printf("\nUppercase!");
      else
         printf("\nLowercase!");

}
