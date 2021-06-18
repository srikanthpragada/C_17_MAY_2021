// Recursion demo

void reverse(int num)
{
    printf("%d", num % 10);
    num /= 10;
    if (num > 0)
       reverse(num);
}

void main()
{
   reverse(125);
}
