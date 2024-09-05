// #include <stdio.h>
// int main()
// {
//   char s[] = {'a', 'b', 'c', 'd','\0'};
//   printf("%s",s );
//   printf("\n");
//   char name[] = "khurram";
//   printf("%s",name );
  
//   return 0;
// }    

// 1. Which of the following is used to appropriately read a multi-word string.
// 1. gets()
// 2. puts()
// 3. printf()
// 4. scanf()
// Ans:- scanf();


// 2. Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char ch[10],
//   str[10];
//   printf("Enter the first string:");
//   scanf("%c", &ch);
//   printf("Enter the second string:");
//   scanf("%s", &str);

//   printf("%d\n",strcmp(ch,str) );
    
    
//   return 0;
// }


// 3. Write your own version of strlen function from <string.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char s[] = "Hello, World!";
//   printf("%d\n", strlen(s));
    
//   return 0;
// }



// 4. Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.

#include <stdio.h>
#include <string.h>

void concatenate_strings(char *dest, const char *src1, const char *src2, const char *src3) {
    // Validate input parameters
    if (dest == NULL || src1 == NULL || src2 == NULL || src3 == NULL) {
        printf("Invalid input parameters.\n");
        return;
    }

    // Calculate the total length of the concatenated strings
    int total_length = strlen(src1) + strlen(src2) + strlen(src3) + 1; // +1 for null terminator

    // Ensure the destination string has enough capacity
    if (strlen(dest) < total_length) {
        printf("Destination string does not have enough capacity.\n");
        return;
    }

    // Concatenate the strings
    strcpy(dest, src1);
    strcat(dest, src2);
    strcat(dest, src3); 
}

int main() {
    char str1[100] = "Hello, ";
    char str2[100] = "world!";
    char str3[100] = " How are you?";
    char concatenated[200];

    concatenate_strings(concatenated, str1, str2, str3);

    printf("Concatenated string: %s\n", concatenated);

    return 0;
}


