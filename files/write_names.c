#include <stdio.h>

void main()
{
  FILE * fp;
  char * names[] = {"Java","JavaScript","Python","C#","TypeScript"};
  int i;


  fp = fopen("names.txt","wt");
  if(fp == NULL)
  {
      printf("Sorry! Could not create file!");
      exit(1);
  }

  for(i = 0; i < 5; i ++)
    fprintf(fp,"%s\n",names[i]);

  fclose(fp);

}
