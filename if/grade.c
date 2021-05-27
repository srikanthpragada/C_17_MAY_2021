// Print grade for given marks

#include<stdio.h>
int main()
{
int marks,grade;

  printf("Enter marks : ");
  scanf("%d",&marks);

  if(marks > 80)
    printf("Grade A");
  else
    if(marks > 70)
       printf("Grade B");
    else
      if (marks > 60)
          printf("Grade C");
      else
          printf("Fail");
}
