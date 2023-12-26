#include <stdio.h>
int addition(int num1, int num2);
int subtract(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
int calculate(int num1, int num2);

int main(void)
{
  int number1, number2;
  int repeat;
  int result;

  result = calculate(number1, number2);
  printf("Result is %d", result);

  printf("\nDo you want to perform another calculation? (1 for Yes and 0 for No): ");
  scanf("%d", &repeat);

  while (repeat == 1)
  {
    calculate(number1, number2);
  }

  return (0);
}

int calculate(int num1, int num2)
{
  int (*func_ptr[])(int, int) = {addition, subtract, multiplication, division};
  int choice;
  int result;
  int repeat;

  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);

  printf("Select Operation:\n0. Addition\n1. Subtraction\n2. Multiplication\n3. Division\nEnter the operation: ");
  scanf("%d", &choice);
  while (choice <= 3 && choice >= 0)
  {
    result = (*func_ptr[choice])(num1, num2);
    break;
  }
  return result;
}

/*Additional function*/
int addition(int num1, int num2)
{
  int sum;

  sum = num1 + num2;
  return sum;
}

int subtract(int num1, int num2)
{
  int sub;

  sub = num1 - num2;
  return sub;
}
int multiplication(int num1, int num2)
{
  int mul;

  mul = num1 * num2;
  return mul;
}
int division(int num1, int num2)
{
  int div;

  div = num1 / num2;
  return div;
}