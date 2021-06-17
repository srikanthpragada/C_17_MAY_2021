#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[30];
  int ch, upper = 0;


  printf("Enter filename :");
  gets(filename);

  fp = fopen(filename,"rt");
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

     if(isupper(ch))
         upper++;
  }

  fclose(fp);
  printf("Count of uppercase letters = %d", upper);
}
