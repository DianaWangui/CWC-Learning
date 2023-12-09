#include <stdio.h>
int main(void)
{
  int number, i, result;
  printf("Enter a number: ");
  scanf("%d", &number);
  for (i = 1; i <= 10; i++)
  {
    result = number * i;
    printf("%d x %d = %d\n", number, i, result);
  }
}