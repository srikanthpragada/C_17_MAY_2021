// Program to calculate area and circumference for the given radius

#include<stdio.h>

void main()
{
 float  circumference, area, radius;
 float  pi = 3.14;

  printf("Enter radius : ");
  scanf("%f",&radius);

  area = pi*radius*radius;
  circumference=2*pi*radius;

  printf("Area = %.2f, Circumference = %.2f",area, circumference);
}
