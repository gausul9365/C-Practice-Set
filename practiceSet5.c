#include <stdio.h>
#include <stdlib.h>

// 1. Write a program using function to find average of three numbers.
// 2. Write a function to convert Celsius temperature into Fahrenheit.
// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2
// .
// 4. Write a program using recursion to calculate nth element of Fibonacci series.
// 5. What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);
// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.
// 7. Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *

// 1. Write a program using function to find average of three numbers
// int avg(int x, int y, int z){

//   return (x+y+z)/2;
// }

// int main(){
// int result;
// result = avg(10, 20, 30);
// printf("Average of three number:%d", result);
// return 0;
// }

// . Write a function to convert Celsius temperature into Fahrenheit.

// int conversion(int celcius){
//   int x = celcius*9/5 + 32;
//   return x;

// }
// int main(){
//   int celcius = 30;
//   int result = conversion(celcius);
//   printf("Fahrenheit = %d", result);
//   return 0;
// }

// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2
// float force(int m){
//   float g = 9.8;
//   return m*g;
// }

// int main(){

//   int x=45;
//   int result = force(x);
//   printf("Force of attraction on a body = %d", result);
//   return 0;
// }


// Write a program using recursion to calculate nth element of Fibonacci series.

// int fibonacci(int i){
//     if(i<=1){
//         return i;
//     }
// else{
//     return fibonacci(i-1) + fibonacci(i-2);
// }
    
// }

// int main(){
//     int x =20;
//     for(int i=0; i<10; i++){
//        printf(" %d", fibonacci(i));
//     }
    
    
//     return 0;
// }

// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

// int sum(int x){
//     if(x==0){
//         return 0;
//     }
//     else{
//         return x + sum(x-1);
//     }
// }
// int main(){
//     int x = 10;
//     int result = sum(x);
//     printf("%d", result);
//     return 0;
// }

// Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *

// #include <stdio.h>

// int main(){
//     int n = 5;

//     for (int i=0; i<n; i++){

//        for(int j = 0; j<i+1; j++){
//          printf("* ");
//        }
//         printf("\n");
//     }
//     return 0;
// }


// inverted right angle traingle
// #include <stdio.h>

// int main(){
//     int n ;

//     printf("ENTER YOUR NUMBER: ");
//     scanf("%d",&n);

//     for (int i=n; i>=1; i--){

//        for(int j = 0; j<i+1; j++){
//          printf("* ");
//        }
//         printf("\n");
//     }
//     return 0;
// }


// number right angle triangle
// #include <stdio.h>

// int main(){
//     int n ;

//     printf("ENTER YOUR NUMBER: ");
//     scanf("%d",&n);

//     for (int i=n; i>=1; i--){

//        for(int j = 1; j<i; j++){
//          printf(" %d",j);
//        }
       
//         printf("\n");
//     }
//     return 0;
// }

// odd number pattern
#include <stdio.h>

// int main(){
//     int n ;

//     printf("ENTER YOUR NUMBER: ");
//     scanf("%d",&n);

//     for (int i=0; i<=n; i++){
//             // i ke hisab se jo ko print kra rhe ho to j ko i k do guna to lena hi pdega tabhi to odd wha tk jaega
//        for(int j = 1; j<i*2; j= j+2) { 
//          printf(" %d",j);
//        }
       
//         printf("\n");
//     }
//     return 0;
// } 

// alphabets printing 
// A = 65
// a = 97

// #include <stdio.h>

// int main(){
//     int n ;

//     printf("ENTER YOUR NUMBER: ");
//     scanf("%d",&n);

//     for (int i=0; i<=n; i++){
//         int a = 1;
        
//        for(int j = 0; j<i; j++){
//         int ch = (char)ch;
//         printf("%c",a+64);
//         a++;
//        }
       
//         printf("\n");
//     }
//     return 0;
// }



// plus with star

#include <stdio.h>

int main(){
    int n ;

    printf("ENTER YOUR NUMBER: ");
    scanf("%d",&n);

    for (int i=0; i<=n; i++){
        
       for(int j = 1; j<=n; j++){
        int a = n/2 + 1;

            if(j == a || i == a){

                printf("*");
                
            }
            else{
                printf(" ");
            }
        
       }
       
        printf("\n");
    }
    return 0;
}











