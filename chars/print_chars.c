// Print char and codes from 32 to 127 (printable chars)
#include <stdio.h>

void main()
{
  unsigned char ch;

      for(ch = 32; ch <= 127; ch ++)
        printf("%c %3d ", ch,ch);

}
