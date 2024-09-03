#include <stdio.h>


// Write a program to accept marks of five students in an array and print them on the screen.
int main(){
int i;
int x[5];
printf("Enter the marks of five students:\n");
for (i = 0; i < 5; i++){
  scanf("%d", &x[i] );
  
}
printf("The marks of five students are:\n");

for ( i = 0; i < 5; i++)
{
  printf("%d", x[i]);
  printf("\n");
}

  return 0;
}


// Pointer  Arithmetic 

#include <stdio.h>
int main()
{
  int a =10;
  int *p = &a;
  printf("%d ",p);
  printf("%d ",p+1);
   printf("%d ",p-2);

   char ch = 'A';
   char *chp = &ch;
   printf("%d ",*chp);

  return 0;
}

// --------------------Problem-------------------------


// 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include <stdio.h>
int main()
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};

  int *ptr = &arr[2];
  printf("%d ",*ptr);
  printf("%d ",*(ptr+1));
  printf("%d ",*(ptr+2));
  return 0;

}


// 2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False.
// (iii) Depends.

//  Ans= False -> array always start with index 0 and in the ques it refers s+3 that means it refering to the 4th element.

// 3. Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>
int main()
{
  int multiplication[10];
  int i;
  for ( int i=0; i<10; i++){
    multiplication[i] = 5*(i+1);
    
  }
  for ( i = 0; i < 10; i++)
  {
     printf("%d ", multiplication[i]);
  }
  
 
  return 0;
}

4. Repeat problem 3 for a general input provided by the user using scanf

#include <stdio.h>
int main()
{
  int i;
  int n;
  int multiplication[10];

  printf("Enter your number: ");
  scanf("%d", &n);
  
  for ( int i=0; i<10; i++){
    multiplication[i] = n*(i+1);
    
  }
  for ( i = 0; i < 10; i++)
  {
     printf("%d ", multiplication[i]);
  }
   
  return 0;
}

// 5. Write a program containing a function which reverses the array passed to it

#include <stdio.h>

void reverNum(int arr[], int size){

  int start = 0;
  int end = size-1;

  for(int i = 0; i<end; i++){

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

int main()
{
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr) / sizeof(arr[0]);


  reverseNum(arr, size );
  for(int i =0; i<size; i++){
    printf("Reverse of the array is : %d ", arr[i]);
  }
  printf("\n");
  return 0;
}


//  7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.

#include <stdio.h>

int main() {
    int multiplication_tables[3][10];

    
    for (int i = 0; i < 10; i++) {
        multiplication_tables[0][i] = 2 * (i + 1);
        multiplication_tables[1][i] = 7 * (i + 1);
        multiplication_tables[2][i] = 9 * (i + 1);
    }

   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", multiplication_tables[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// Create a three–dimensional array and print the address of its elements in increasing order.
#include <stdio.h>
int main()
{
  
  int arr[3][3][3];
for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
    for(int k=0; k<3; k++){

      arr[i][j][k] = i+1;
      printf("%d ", &arr[i][j][k]);


  }
  printf("\n");
}
printf("\n");
}

  return 0;
}



