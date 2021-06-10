// Functions and Arrays

void main()
{
  int a[] = {10,20,25,45,50};
  int b[] = {1,2,2,3,4};

      print_array(a);
      printf("\nArray b\n");
      print_array(b);
}

void print_array(int arr[5])
{
   int i;

       for(i = 0 ; i < 5; i ++)
           printf("%5d", arr[i]);
}
