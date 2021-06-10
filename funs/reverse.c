
void main()
{
     reverse(23423);
}

void reverse(int num)
{
   while(num > 0)
   {
       printf("%d", num % 10);
       num /= 10;
   }
}
