#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;


  fp = fopen("names.txt","rt");
  if(fp == NULL)
  {
      printf("Sorry! Could not open file!");
      exit(1);
  }

  while(1)  // infinite loop
  {
     ch = fgetc(fp); // read a char from file
     if(ch == EOF)   // Reached End of file
         break;

     putch(ch);
  }

  fclose(fp);
}
