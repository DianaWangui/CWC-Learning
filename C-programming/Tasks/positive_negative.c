#include <stdio.h>
int main(void)
{
  int number;
  printf("Program to determine whether a given number is positive or negative");
  printf("\nEnter an integer: ");
  scanf("%d", &number);
  if (number > 0)
  {
    printf("\n%d is a positive number.", number);
  }
  else if (number < 0)
  {
    printf("\n%d is a negative number.", number);
  }
  else
  {
    printf("\n%d is zero.", number);
  }
  return (0);
}