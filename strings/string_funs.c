// Demo string functions

#include <stdio.h>

void main()
{
 char st1[20] = "Abc", st2[20];


     printf("Length : %d\n", strlen(st1));
     strcpy(st2,st1);  // Copy st1 to st2
     puts(st1);
     puts(st2);

     strupr(st2);
     puts(st2);

     printf("%d\n", stricmp(st1,st2));
}
