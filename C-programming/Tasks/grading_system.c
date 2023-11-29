#include <stdio.h>
int main(void)
{
  int score;
  printf("Grading system");
  printf("\nEnter your score: ");
  scanf("%d", &score);

  if (score >= 90)
  {
    printf("You scored A");
  }
  else if (score >= 80 && score <= 89)
  {
    printf("You scored B");
  }
  else if (score >= 70 && score <= 79)
  {
    printf("You score C");
  }
  else if (score >= 60 && score <= 69)
  {
    printf("You scored D");
  }
  else
  {
    printf("You scored F");
  }
}