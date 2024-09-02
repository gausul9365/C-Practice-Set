#include <stdio.h>
void goodmorning();

void goodmorning(){

  printf("Goodmorning");
}
int main(){
int a;
goodmorning();


  return 0;
}

// Use the library function to calculate the area of a square with side a

int area(){
  int a=10;
int areaofSquare = a*a;
printf("Area of Square is: %d\n", areaofSquare);

}
int main(){
int a;
area();
return 0;

}


  // factorial calculation

  int factorial(int x){
    if(x==0 || x==1){

      return 1;
    }
    else{
      int fact = x*factorial(x-1);
      return fact;
    }
  }
  int main(){
    int fact;
    int result = factorial(5);
    printf("factorial of number: %d", result);
    return 0;
  }

  long factorial(int x){
    int fact;

    if(x==0 || x==1){
      return 1;
    }
    else{
      fact = x*factorial(x-1);
      return fact;
    }
  }

  int main(){
    
    int x;
    printf("Enter your numver:");
    scanf("%d", &x);
    int result = factorial(x);
    printf("Factorial of the number is:%d", result);
    return 0;
  }

  #include <stdio.h>
#include <limits.h>

int main() {
    printf("Range of long data type:\n");
    printf("Minimum: %ld\n", LONG_MIN);
    printf("Maximum: %ld\n", LONG_MAX);

    return 0;
}