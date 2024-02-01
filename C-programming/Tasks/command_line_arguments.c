#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  char *function = argv[1];
  int result;

  /* Check if user gives more or less than 4 args*/
  if (argc != 4)
  {
    fprintf(stderr, "Usage: %s <function> <first_value> <second_value>\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  int first_value = atoi(argv[2]);
  int second_value = atoi(argv[3]);

  /* Performing the specific operations using string compare*/
  if (strcmp(function, "add") == 0)
  {
    result = first_value + second_value;
  }
  else if (strcmp(function, "subtract") == 0)
  {
    result = first_value - second_value;
  }
  else if (strcmp(function, "multiply") == 0)
  {
    result = first_value * second_value;
  }
  else if (strcmp(function, "divide") == 0)
  {
    /* checking if the divisor is 0*/
    if (second_value == 0)
    {
      fprintf(stderr, "Division by zero is not allowed.\n");
      return EXIT_FAILURE;
    }
    result = first_value / second_value;
  }
  else
  {
    fprintf(stderr, "The function %s is invalid\n", function);
    return EXIT_FAILURE;
  }

  /*Printing out the results*/
  printf("Result: %d\n", result);

  return (0);

}