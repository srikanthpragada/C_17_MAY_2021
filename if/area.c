// Calculate area for circle or square
#include<stdio.h>

void main()
{
 int object, radius, side, area;

 printf("Enter object (1-Circle, 2-Square) :");
 scanf("%d",&object);

 if (object == 1)
 {
     printf("Enter radius :");
     scanf("%d",&radius);
     area = 3.14 * radius * radius;
     printf("Area of Circle with radius %d is %d",radius, area);
 }
 else
 {
     printf("Enter side :");
     scanf("%d",&side);
     area = side * side;
     printf("Area of Square with side %d is %d",side, area);
 }


}
