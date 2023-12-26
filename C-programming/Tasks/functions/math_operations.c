#include <stdio.h>
/* Prototypes of the function used*/
int addition(int num1, int num2);
int subtract(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
int calculate(int num1, int num2, int (*func_ptr[4])(int, int));

int main(void)
{
  int number1, number2;
  /* pointer to all the function used, in an array format*/
  int (*func_ptr[4])(int, int);
  int repeat;

  /* Do while loop for the calculation to loop until the choice is not 1*/
  do
  {
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);

    calculate(number1, number2, func_ptr);

    printf("\nDo you want to perform another calculation? (1 for Yes and 0 for No): ");
    scanf("%d", &repeat);
  } while (repeat == 1);
  return 0;
}

/* The function that calls the other function using array function pointer and returns the result*/
int calculate(int num1, int num2, int (*func_ptr[4])(int, int))
{
  int choice, result;

  /* Initializing each array with its index*/
  func_ptr[0] = addition;
  func_ptr[1] = subtract;
  func_ptr[2] = multiplication;
  func_ptr[3] = division;

  printf("Select Operation:\n0. Addition\n1. Subtraction\n2. Multiplication\n3. Division\n");
  printf("Enter the operation: ");
  scanf("%d", &choice);

  /* Checking the correct user input otherwise print invalid input*/
  if (choice >= 0 && choice <= 3)
  {
    result = func_ptr[choice](num1, num2);
    printf("Result: %d\n", result);
  }
  else
  {
    printf("Invalid operation.\n");
  }
  return result;
}

/*Addition function*/
int addition(int num1, int num2)
{
  int sum;

  sum = num1 + num2;
  return sum;
}

/*Subtraction function*/
int subtract(int num1, int num2)
{
  int sub;

  sub = num1 - num2;
  return sub;
}

/*Multiplication fucntion*/
int multiplication(int num1, int num2)
{
  int mul;

  mul = num1 * num2;
  return mul;
}

/*Division function*/
int division(int num1, int num2)
{
  int div;

  div = num1 / num2;
  return div;
}