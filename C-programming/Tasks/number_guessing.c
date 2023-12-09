#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int number, user_no;
  int count = 0;
  int non_int_input;

  /* this will be used to check the number of times an error is printed*/
  int error_printed;

  /*srand() is a function in c used to generate random numbers */
  /* function srand(time(NULL)) is used to randomly chose
   a different number everytime the program runs*/
  srand(time(NULL));

  number = rand() % 100;
  /* We use while loop to iterate the number of time user guesses */
  while (1)
  {
    if (!error_printed)
    {
      printf("enter your guess (1-100): ");
    }
    non_int_input = scanf("%d", &user_no);
    /*checking if user input is a valid int value if not*/
    if (non_int_input != 1)
    {
      /* keep reading each value one by one and return an error message*/
      while (getchar() != '\n')
        ;
      if (!error_printed)
      {
        printf("enter a valid int value\n");
        continue;
      }
    }
    /*Checking if user input is beyond the targetted input range */
    if (user_no < 0 || user_no > 100)
    {
      printf("Please enter a number in the given range\n");
      continue;
    }
    /* Count is used here to count number of time user guessed and its incremented each time user guesses */
    count++;

    /* if user guess==random generated no congratulates, return the number of counts and break out of the loop */
    if (user_no == number)
    {
      printf("Congratulations! You guessed the correct number in %d attempts.", count);
      break;
    }
    /* if number is less print the try higher hint and continue*/
    else if (user_no < number)
    {
      printf("Incorrect! Try higher.\n");
    }
    /* if user_no is greater than random number print the try lower hint and continue*/
    else if (user_no > number)
    {
      printf("Incorrect! Try lower.\n");
    }
    /* I dont think this will get executed, but I think it should handle non-int value*/
    else
    {
      printf("Incorrect! Try again.\n");
    }
  }
  return (0);
}