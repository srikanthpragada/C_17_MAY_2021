// Read data from file and display it
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
  int count;

     fp = fopen(FILENAME,"rb");  // read binary

     while(1)
     {
        count = fread(&s, sizeof(s), 1, fp);  // Read a student record from file
        if (count == 0)  // EOF
            break;
        printf("%3d  %-30s  %3d\n", s.studno, s.name, s.marks);
     }

     fclose(fp);
}
