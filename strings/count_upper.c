// Print no. of uppercase letters in a string

#include <stdio.h>

void main()
{
 char st[50];
 int i, count = 0;

     printf("Enter a string :");
     gets(st);

     for(i = 0 ; st[i] != '\0' ; i ++)
     {
        if(isupper(st[i]))
            count ++;
     }

     printf("\nNo. of uppercase letters : %d\n",count);
}
