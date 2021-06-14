// Functions and Arrays

void main()
{
  int a[] = {10,20,25,45,50};
  int b[] = {1,2,2,3,4,5,6,6,7,8};

      print_array(a,5);
      printf("\nArray b\n");
      print_array(b,10);
}

void print_array(int arr[], int len)
{
   int i;

       for(i = 0 ; i < len; i ++)
           printf("%5d", arr[i]);
}
