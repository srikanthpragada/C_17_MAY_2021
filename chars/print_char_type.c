#include<stdio.h>
void main()
{
  char ch;

  printf("Enter a character :");
  ch=getchar();

  if(isalpha(ch))
     printf("Alphabet");
  else
     if(isdigit(ch))
         printf("Digit");
     else
         printf("Other character");
}
