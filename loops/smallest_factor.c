// Print smallest factor other than 1
// For prime numbers, print the number as smallest factor

#include<stdio.h>
void main()
{
 int num,i, sf;

 printf("Enter number : ");
 scanf("%d",&num);

 sf = num;

 for(i=2;i<=num/2;i++)
 {
   if(num % i == 0)
   {
     sf = i;
     break;
   }
 }

 printf("Smallest factor is %d",sf);

}
