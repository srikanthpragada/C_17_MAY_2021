int v = 100;  // Global variable

int search(int a[5], int sn)
{
 int i;

     for(i=0; i < 5; i ++)
     {
         if (a[i] == sn)
            return i;   // Found and return pos
     }

     return -1; // Not found
}

int sum(int a[5])
{
  int total = 0, i;

     for(i=0; i < 5; i ++)
         total += a[i];

     return total;
}

void main()
{
 int a1[] = {1,10,22,30,4};
 int a2[] = {100,2022,34,224,23};
 int total;


      total = sum(a1);
      printf("Total = %d\n", total);
      total = sum(a2);
      printf("Total = %d\n", total);
      printf("Found 25 at %d ", search(a1,25));
}
