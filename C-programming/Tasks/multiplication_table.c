#include <stdio.h>
int main(void)
{
  /*initializing variables to store values*/
  int number, i, result;
  /*taking input from  user using scanf*/
  printf("Enter a number: ");
  scanf("%d", &number);
  /*for loop to iterate through the numbers and do the multiplication*/
  for (i = 1; i <= 10; i++)
  {
    /* result stores the multiplication value after every loop*/
    result = number * i;
    /*printing out the multiplication table to the console/output*/
    printf("%d x %d = %d\n", number, i, result);
  }
}