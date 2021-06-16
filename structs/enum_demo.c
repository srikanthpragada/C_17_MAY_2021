
enum paymode {
   CASH,
   BANK_TRANSFER,
   CREDIT_CARD
};

enum week  {
   MON = 1, TUE = 5, WED = 7, THU = 10
};

void main()
{
  enum paymode payment;

     payment = CREDIT_CARD;
     printf("%d", payment);


}
