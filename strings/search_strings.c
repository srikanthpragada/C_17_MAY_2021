// Search for a string in an array

#include <stdio.h>

void main()
{
 char names[5][20] = {"Java","C","C++","Python","JavaScript"};  // Array of strings
 char name[20];
 int i;

     printf("Enter name :");
     gets(name);

     for(i = 0; i < 5; i ++)
     {
         if (stricmp(names[i], name) == 0)
         {
             printf("Found at %d\n",i);
             break;
         }
     }

}
