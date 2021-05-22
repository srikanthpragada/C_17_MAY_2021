// Total and avg marks

#include <stdio.h>

void main()
{
 int m1,m2,m3,total;
 float avg_marks;

    printf("Enter 3 marks :");
    scanf("%d%d%d",&m1,&m2,&m3);

    total = m1 + m2 + m3;
    avg_marks = total / 3.0;

    printf("Total = %d, Average = %.2f",total, avg_marks);
}
