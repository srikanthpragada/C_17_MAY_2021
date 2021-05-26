// Calculate net salary

#include <stdio.h>

void main()
{
    int basic,grade,hra,da,netsalary;

    printf("Enter basic salary :");
    scanf("%d",&basic);

    printf("Enter grade [1/2]  :");
    scanf("%d",&grade);

    if(grade == 1)
    {
      hra = basic * 0.30;
      da = basic * 0.20;
    }
    else
    {
      hra = basic * 0.35;
      da = basic * 0.25;
    }

    netsalary = basic + hra + da;

    printf("Net salary : %d", netsalary);

}

