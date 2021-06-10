
void main()
{
     factors(234);
}

void factors(int num)
{
 int i;

     for(i = 2; i <= num/2; i ++)
        if(num % i == 0)
           printf("%d ",i);
}

