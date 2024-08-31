#include <stdio.h>

// Write a program to find grade of a student given his marks based on below:
// 90 – 100 => A
// 80 – 90 => B
// 70 – 80 => C
// 60 – 70 => D
// 50 – 60 => E
// <50 => F

// int main(){

//     int a;
//   printf("Enter your marks:");
//   scanf("%d", &a);

//   if(a >= 90 && a <= 100){
//     printf("A");
//   }
//   else if(a >= 80 && a <= 90){
//     printf("B\n");
//   }
//     else if(a >= 70 && a <= 80){
//     printf("C\n");
//   }
//     else if(a >= 60 && a <= 70){
//     printf("D\n");
//   }
//     else if(a >= 50 && a <= 60){
//     printf("E\n");
//   }
//     else if(a<50){
//     printf("F\n");
//   }
//   return 0;

// }

// --------------------------Practice Set 3------------------------

// Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume thereare three subjects and take the marks as input from the user.

// int main(){
//   int subject1, subject2,subject3;

//   printf("Enter the marks if three subject:");
//   scanf("%d %d %d",&subject1, &subject2, &subject3);
//   float total = (subject1 + subject2 + subject3) / 3.0;

//   if(total >=33){
//     printf("Pass");
//   }
//   else{
//     printf("Fail");
//   }

// return 0;

// }

// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

// int main(){

//   float salary;
//   printf("Enter your Salary:");
//  scanf("%f", &salary);

//  if(salary>= 2.5 && salary<=5 ){
//     printf("5");
//  }
//  else if(salary>5 && salary<=10){
//     printf("20");
//  }
//  else if(salary>=10){
//     printf("30");
//  }
//  return 0 ;

// }

// Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.

// int main(){
//   int year;
//   printf("Enter the Year:");
//   scanf("%d", &year);

//   if (year%400==0){
//     printf("leap year");
//   }
//   else if(year%100==0){
//     printf("Not a leap year");
//   }

//   else if(year % 4 == 0 ){
//     printf("leap year");
//   }
//   return 0;
// }

// Write a program to determine whether a character entered by the user is lowercase or not
// #include <ctype.h>
// int main(){
//   char ch;

//   printf("Enter your character:");
//   scanf("%c", &ch);

//   if(islower(ch)){

//     printf("Lower Case");
//   }
//   else{
//     printf("Upper Case");
//   }

// return 0;
// }

// ------------------another approch with no library
// int main(){

//   char ch;
//   printf("Enter your character:");
//   scanf("%c", &ch);

//   if(ch >= 'a' && ch<= 'z'){
//     printf("Lower Case");
//   }
//   else{
//     printf("Upper Case");
//   }

//   return 0;

// }

// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main()
{
  int num1, num2, num3, num4, greatest;

  printf("Enter four numbers: ");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  greatest = num1;

  if (num2 > greatest)
  {
    greatest = num2;
  }
  if (num3 > greatest)
  {
    greatest = num3;
  }
  if (num4 > greatest)
  {
    greatest = num4;
  }

  printf("The greatest number is: %d\n", greatest);

  return 0;
}
