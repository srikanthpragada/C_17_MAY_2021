// Validate Password

#include<stdio.h>

void main()
{
 char ch;
 int i, upper , digit;

  upper = digit = 0;
  printf("Enter password :");

  for(i=1;i <= 6; i++)
  {
     ch = getch();
     putchar('*');
     if(isupper(ch))
        upper = 1;
     else
       if(isdigit(ch))
          digit = 1;
  }

  if(upper && digit)
    printf("\nValid password ");
  else
    printf("\nInvalid password");
}
