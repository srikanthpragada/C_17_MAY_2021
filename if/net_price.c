// Display sign of the number

#include <stdio.h>

void main()
{
  int price;

     printf("Enter price :");
     scanf("%d",&price);

     if(price > 1000)
         price = price * 90 / 100;  // price = price * 0.90;     price *= 0.90;
     else
         price = price * 95 / 100;

     printf("Net Price = %d",price);
}
