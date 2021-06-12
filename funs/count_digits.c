
int count_digits(int num)
{
  int count = 0;

     do
     {
        count ++;
        num /= 10;
     }
     while(num > 0);

     return count;
}

int main()
{
   int digits;

      digits = count_digits(34343);
      printf("Digits = %d", digits);

      return 0;  // Success
}
