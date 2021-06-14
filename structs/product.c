
struct product {
   char name[20];
   float price;
   int qoh;
};


void main()
{
  struct product p1;

     strcpy(p1.name,"Product1");
     p1.price = 10.50;
     p1.qoh = 5;

     printf("%s %.2f %d", p1.name, p1.price, p1.qoh);
}
