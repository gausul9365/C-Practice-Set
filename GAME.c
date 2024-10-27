#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{

  char a[] = "rock";
  char b[] = "paper";
  char c[] = "scissor";
  printf("Rock Paper Scissor\n");
  printf("You will have to press Rock as R, Paper as P, Scissor as S\n");

  printf("Lets begin the Game\n");

  char ch[20];
  printf("Make Your Move:");
  scanf(" %s", &ch);

  // randomly computer move
  srand(time(NULL));
  int choice = rand() % 3;
  const char *computerMove;
  switch (choice)
  {
  case 0:
    computerMove = a;
    break;
  case 1:
    computerMove = b;
    break;
  case 2:
    computerMove = c;
    break;
  }

  printf("Computer move:%s\n", computerMove);

  if (strcmp(ch, "rock") == 0)
  {
    if (strcmp(computerMove, "scissor") == 0)
    {
      printf("You Win\n");
    }
    else if (strcmp(computerMove, "paper") == 0)
    {
      printf("Computer Loss\n");
    }
    else
    {
      printf("It's a tie!\n");
    }
  }
  else if (strcmp(ch, "paper") == 0)
  {
    if (strcmp(computerMove, "scissor") == 0)
    {
      printf("You Loss\n");
    }
    else if (strcmp(computerMove, "rock") == 0)
    {
      printf("Computer Win\n");
    }
    else
    {
      printf("It's a tie!\n");
    }
  }
  else if (strcmp(ch, "scissor") == 0)
  {
    if (strcmp(computerMove, "paper") == 0)
    {
      printf("You Won\n");
    }
    else if (strcmp(computerMove, "rock") == 0)
    {
      printf("You Loss\n");
    }
    else
    {
      printf("It's a tie\n");
    }
  }

  else
  {
    printf("Invalid Input! Try again...");
  }

  return 0;
}
