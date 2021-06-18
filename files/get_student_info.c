// Read one student's info based on studno

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
  int count,studno, pos;

     fp = fopen(FILENAME,"rb");  // read binary

     printf("Enter student number :");
     scanf("%d",&studno);

     pos = (studno - 1)  * sizeof(struct student);
     fseek(fp,pos,SEEK_SET);   // Move to pos from the beginning of the file - Random Access

     count = fread(&s, sizeof(s), 1, fp);  // Read a student record from file
     if(count == 1)
          printf("%3d  %-30s  %3d\n", s.studno, s.name, s.marks);
     else
          printf("Sorry! Student number not found!\n");

     fclose(fp);
}
