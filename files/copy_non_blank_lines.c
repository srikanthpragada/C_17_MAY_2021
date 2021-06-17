// Copy all non-blank lines from source file to target file
#include <stdio.h>

void main()
{
  FILE * sfp, * tfp;
  char sourcefile[30], targetfile[30];
  char line[200];
  char *p;


  printf("Enter source filename :");
  gets(sourcefile);

  printf("Enter target filename :");
  gets(targetfile);

  // open source file in read mode
  sfp = fopen(sourcefile,"rt");
  if(sfp == NULL)
  {
      printf("Sorry! Could not open file -> %s\n!", sourcefile);
      exit(1);
  }

  // open target file in write mode
  tfp = fopen(targetfile,"wt");
  if(tfp == NULL)
  {
      printf("Sorry! Could not create file -> %s\n!", targetfile);
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
