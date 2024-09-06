
// #include <stdio.h>

// #include <stdio.h>
// int main()
// {

// // Reading the file
// FILE *ptr = NULL;
// char string[50] = " rewritng the name: Gausul Wara Imam";
// ptr = fopen("fileReadWrite.txt", "r");
// fscanf(ptr, "%s", string);
// printf("%s\n", string );

// Writing the file
// ptr = fopen("fileReadWrite.txt", "w");
// fprintf(ptr, "%s", string);

// appending string to the file
// ptr = fopen("fileReadWrite.txt", "a");
// fprintf(ptr, "%s", string);

// GETC() AND FPUTC()
// ptr = fopen("fileReadWrite.txt", "r");

// fputc(' G ', ptr);
// fputc('a', ptr);

// char c = fgetc(ptr);

// printf("%c\n",c );
// ptr = fopen("fileReadWrite.txt", "r+");
// char string[100];

// fputs("hello bro i am gausul wara imam", ptr);
//   fclose(ptr);
//   return 0;
// }

// -------------Exercise--------------

// Write a program to read three integers from a file
// #include <stdio.h>
// int main()
// {
//    int num1, num2, num3;
//   FILE *ptr;
//   ptr = fopen("fileReadWrite.txt", "r");

//   if(ptr == NULL){
//     printf("Unable to open file");
//     return 1;
//   }
//   if(fscanf(ptr,"%d %d %d",&num1, &num2, &num3) != 3){
//     printf("Error Reading Integer of the file!\n" );
//     return 1;

//   }

//   printf("%d,%d,%d",num1, num2, num3);
//   fclose(ptr);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//     FILE *file;
//     int num1, num2, num3;

//     // Open the file in read mode
//     file = fopen("fileReadWrite.txt", "r");

//     // Check if the file was opened successfully
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1;
//     }

//     // Read three integers from the file
//     if (fscanf(file, "%d %d %d", &num1, &num2, &num3) != 3) {
//         printf("Error reading integers from the file.\n");
//         return 1;
//     }

//     // Print the read integers
//     printf("The three integers from the file are: %d, %d, %d\n", num1, num2, num3);

//     // Close the file
//     fclose(file);

//     return 0;
// }

// Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.

// #include <stdio.h>
// int main()
// {
//    int n;
//    char title[100];
//   printf("Enter your number for the table u want:");
//   scanf("%d",&n);
//   FILE *ptr;
//   ptr = fopen("fileReadWrite.txt", "w");
//   sprintf(title, "Multiplication table of %d:", n);
//     for(int i =1; i<=10; i++){
//       fprintf(ptr, "%d X %d = %d\n", n, i, n*i);
//     }

//   fclose(ptr);
//        printf("Multiplication table saved to fileReadWrite.txt\n");
//   return 0;
// }

// Write a program to read a text file character by character and write its content twice in separate file.

// #include <stdio.h>
// int main()
// {
//   FILE *ptr = NULL;
//   char ch;
//   ptr = fopen("fileReadWrite.txt", "r");

//   FILE *prnt = NULL;
//   char string[40];
//   prnt = fopen("appending.txt", "w");

//   ch = fgetc(ptr);
//   fputc(ch, prnt);

//   fclose(ptr);
//   return 0;
// }

// 4. Take name and salary of two employees as input from the user and write them to a text file in the following format:
// i. Name1, 3300
// ii. Name2, 7700

// #include <stdio.h>
// int main()
// {
//   FILE *ptr = NULL;
//   char name1[100], name2[100];
//   int salary1 = 3300;
//   int salary2 = 7700;

//   printf("Enter Name1:");
//   scanf("%s", &name1);
//   printf("\n");

//   printf("Enter Name2:");
//   scanf("%s", &name2);

//   ptr = fopen("a.txt", "w+");
//   fprintf(ptr, "Employee    Salary\n");
//   fprintf(ptr, "%s      %d\n", name1, salary1);
//   fprintf(ptr, "%s      %d", name2, salary2);
//   fclose(ptr);

//   return 0;
// }
