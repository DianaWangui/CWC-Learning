#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int number, user_no, input_no;
  int count = 0;
  /*srand() is a function in c used to generate random numbers */
  /* I used srand(time(NULL)) to randomly chose
   a different number when the program is run*/
  srand(time(NULL));

  number = rand() % 100;
  /* We use while loop to iterate */
  while (1)
  {
    printf("enter your guess (1-100): ");
    input_no = scanf("%d", &user_no);
    if (input_no != 1)
    {
      while (getchar() != '\n')
      {
        printf("Invalid input. Please enter an number\n");
      }
        }
    /*Checking if user input is beyond the targetted input range
     *the loop will continue until the user input is in range 1-100
     */
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