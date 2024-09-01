#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  main(){


int min, max, random_num;

srand(time(NULL));

printf("NUMBER GUESSING GAME");
printf("\n");

printf("Enter minimum value: ");
    scanf("%d", &min);
    printf("Enter maximum value: ");
    scanf("%d", &max);
     if (min >= max) {
        printf("Error: Minimum value must be less than maximum value.\n");
        return 1;
    }

random_num = rand() % (max - min + 1) + min;

int number;
printf("Guess the number:");
scanf("%d",&number);

if(number > random_num){
  printf("Lower number please\n");
}
else if( number < random_num){
  printf("Higher number please\n");
}
else if (random_num == number){
  printf("Congratulations! You guessed it\n");
}

printf("Actual number is:%d\n", random_num);
printf(" "); 

if(number > random_num){
printf("don't worry broh! try again");
}

if( number < random_num){
printf("Why do you always think small? Try with Billionaire mindset\n");
}
return 0;

}