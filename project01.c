#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int random_number, guess_number,number_of_attempts=0;
  srand(time(NULL));
  printf("Welcome To the Number Guessing Game\n");
  random_number = rand() % 100 + 1;
  do
  {
    printf("please enter your guess between (1 to 100) : ");
    scanf("%d", &guess_number);
    if (guess_number < random_number)
    {
      printf("guess a larger number\n");
    }
    else if (guess_number > random_number)
    {
      printf("guess a smaller number\n");
    }
    else
    {
      printf("congratulations! you have successfully guessed the number in %d attempts\n",number_of_attempts);
    }
    number_of_attempts++;

  } while (random_number != guess_number);
  printf("thank you for playing\n");
  printf("developed by PIYUSH KUMAR");
  return 0;
}