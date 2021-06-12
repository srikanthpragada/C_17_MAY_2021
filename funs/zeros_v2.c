// Pass by reference (Address)
void zeros(int * a, int * b)
{
    *a = 0;
    *b = 0;
}

void main()
{
  int x = 10, y = 20;

      zeros(&x,&y);
      printf("%d %d",x,y);

}
