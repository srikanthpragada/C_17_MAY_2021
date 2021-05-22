#include<stdio.h>

void main()
{
 int price, netprice;
 int discount;
 int tax;

   printf("Enter price :");
   scanf("%d",&price);
   discount = price * 15 / 100;
   price = price - discount;   // price -= discount;
   tax = price * 5 / 100;
   netprice = price + tax;

   printf("Net Price = %d\n", netprice);
}
