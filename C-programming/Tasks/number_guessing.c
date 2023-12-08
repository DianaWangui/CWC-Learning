#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int number, user_no;
  int count = 0;
  /*srand() is a function in c used to generate random numbers */
  /* I used srand(time(NULL)) to randomly chose
   a different number when the program is run*/
  // srand(time(NULL));

  // number = rand() % 100;
  number = rand() % 100;
  // printf("Number: %d\n", number);
  while (number > 0)
  {
    printf("enter your guess (1-100): ");
    scanf("%d", &user_no);
    count++;

    if (user_no == number)
    {
      printf("Congratulations! You guessed the correct number in %d attempts.", count);
      break;
    }
    if (user_no < number)
    {
      printf("Incorrect! Try higher.\n");
    }
    if (user_no > number)
    {
      printf("Incorrect! Try lower.\n");
    }
  }
}