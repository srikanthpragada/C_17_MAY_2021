
#include <stdio.h>
#define FILENAME  "students.dat"

struct student {
  int studno;
  char name [30];
  int marks;
};

void main()
{
  FILE * fp;
  struct student s;
  int studno = 1;

     fp = fopen(FILENAME,"wb");  // write binary

     while(1)
     {
        fflush(stdin); // clear keyboard buffer
        printf("Enter name [end to stop] :");
        gets(s.name);

        if(stricmp(s.name, "end") == 0)
           break;

        printf("Enter marks :");
        scanf("%d",&s.marks);

        s.studno = studno;

        fwrite(&s, sizeof(s), 1, fp);  // Write a student record to file
        studno ++;
     }

     fclose(fp);
}
