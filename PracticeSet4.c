// Question:
// 1. Write a program to print multiplication table of a given number n.
// 2. Write a program to print multiplication table of 10 in reversed order.
// 3. A do while loop is executed:
// a. At least once.
// b. At least twice.
// c. At most once.
// 4. What can be done using one type of loop can also be done using the other two
// types of loops – true or false?
// 5. Write a program to sum first ten natural numbers using while loop.
// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
// 7. Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).
// 8. Write a program to calculate the factorial of a given number using a for loop.
// 9. Repeat 8 using while loop.
// 10. Write a program to check whether a given number is prime or not using loops.
// 11. Implement 10 using other types of loops.

// #include <stdio.h>
// int main(){
//   int n;
//   scanf("%d",&n);
//   for(int i=1;i<=10;i++){

//     int x = n*i;
//     printf("%d\n",x);
//   }
//   return 0;
// }

// Q- 7,8,9;
// #include <stdio.h>
// int main(){
//   int n = 8;

//   int sum = 0;
//   for(int i=1;i<=10;i++){
//     int x = n*i;
//     sum = sum+x;
//   }
//   printf("%d",sum);
//   return 0;
// }

// #include <stdio.h>

// int main(){
//   int fact =1;
//   int x=5;
//    for(int i=1;i<=x;i++){
//     fact = fact*i;

//   }
//   printf("%d",fact);
//   return 0;

// }

#include <stdio.h>

int main()
{

  int x = 50;
  int is_prime = 1;

  for (int i = 2; i < x / 2; i++)
  {
    if (x % i == 0)
    {
      is_prime = 0;
    }
    else
    {
      is_prime = 1;
    }
  }
  if (is_prime)
  {
    printf("not a prime number");
  }
  else
  {
    printf("prime number");
  }
  return 0;
}
