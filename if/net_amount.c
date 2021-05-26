// Display net amount

#include <stdio.h>

void main()
{
  int price, qty, amount;

     printf("Enter price :");
     scanf("%d",&price);
     printf("Enter qty :");
     scanf("%d",&qty);

     amount = price * qty;

     if(qty > 5)
         amount = amount * 0.90;  // 10% discount
     else
         amount = amount * 0.95;  // 5% discount

     if(amount > 10000)
        amount = amount * 0.90;

     printf("Net Amount = %d",amount);
}
