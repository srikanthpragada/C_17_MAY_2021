#include<stdio.h>
void main()
{
  char ch;
  int i;

  printf("Enter some chars :\n");

  for(i=1; i <= 5; i ++)
  {
     ch = getch();
     if(islower(ch))
        ch = toupper(ch);

     putch(ch);
  }
}
