#include <stdio.h>

// Which of the following is invalid in C?
// a. int a=1; int b = a;
// b. int v = 3*3;
// c. char dt = ‘21 dec 2020’;

int main()
{
  // c is incorrect
  // lets check via code
  int a = 1;
  int b = a;
  int v = 3 * 3;
  // char dt = '21 dec 2020';

  printf("%d", b);
  printf(" ");
  printf("%d", v);
  // printf("%s", dt);

  return 0;

  // conclusion- when we run the code without comsidering "dt" then it executed successfull, rather than got an error
}

// What data type will 3.0/8 – 2 return?

// Ans = double;

// Write a program to check whether a number is divisible by 97 or not

int main()
{
  int a = 97;

  if (a % 2 == 0)
  {
    printf("97 is divisible by 2");
  }
  else
  {
    printf("97 is not divisible by 2");
  }
  return 0;
}

// Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

int main()
{

  int total, x, y, z, k;
  x = 2, y = 3, z = 3, k = 1;
  total = 3 * x / y - z + k;

  printf("%d", total);
  return 0;
}
// // 3.0 + 1 will be:
// a. Integer.
// b. Floating point number.
// c. Character.

// Ans = b floating point number
