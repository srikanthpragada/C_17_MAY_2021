void line(int len, char ch)
{
 int i;

     for(i=1; i <= len; i ++)
        putch(ch);
}

void hyphen_line(int len)
{
   int i;

     for(i=1; i <= len; i ++)
        putch('-');
}

void main()
{
     hyphen_line(20);
     printf("\nSrikanth Technologies\n");
     line(30,'*');

}
