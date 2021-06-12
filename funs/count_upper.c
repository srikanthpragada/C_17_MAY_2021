// Function to return no. of uppercase letters

int count_upper(char st[30])
{
 int i,count = 0;

      for(i=0; st[i] != '\0' ; i++)
      {
         if(isupper(st[i]))
             count ++;
      }

      return count;
}

void main()
{
  char s[] = "AbcXYZPqr";

      printf("Count = %d", count_upper(s));
}
