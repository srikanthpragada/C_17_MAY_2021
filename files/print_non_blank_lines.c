// Print all non-blank lines
#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[30];
  char line[200];
  char *p;


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
      p =  fgets(line,200,fp);
      if(p == NULL)  // EOF
        break;

      if (strlen(line) > 1)   // Non-blank line because 1 char for \n
         printf("%s",line);
  }

  fclose(fp);

}
