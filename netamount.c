// Program to calculate net amount

#include<stdio.h>

void main()
{
  int qty, price, amount, discount, net_amount;

      printf("Enter price :");
      scanf("%d",&price);
      printf("Enter qty   :");
      scanf("%d",&qty);

      amount = qty * price;
      discount = amount * 10 / 100;
      net_amount = amount - discount;

      printf("Amount     = %6d\n", amount);
      printf("Discount   = %6d\n", discount);
      printf("Net Amount = %6d\n", net_amount);
}
