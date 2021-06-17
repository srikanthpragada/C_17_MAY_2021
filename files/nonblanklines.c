// Copy all non-blank lines from source file to target file
// Filenames are taken on command line
// Usage: nonblanklines source target

#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * sfp, * tfp;
  char line[200];
  char *p;


  // open source file in read mode
  sfp = fopen(argv[1],"rt");
  if(sfp == NULL)
  {
      printf("Sorry! Could not open file -> %s\n", argv[1]);
      exit(1);
  }

  // open target file in write mode
  tfp = fopen(argv[2],"wt");
  if(tfp == NULL)
  {
      printf("Sorry! Could not create file -> %s\n", argv[2]);
      exit(2);
  }

  while(1)  // infinite loop
  {
      p =  fgets(line,200,sfp);  // read a line from source file
      if(p == NULL)  // EOF
        break;

      if (strlen(line) > 1)     // Non-blank line because 1 char for \n
         fputs(line,tfp);       // write to target file
  }

  fclose(sfp);
  fclose(tfp);

}
