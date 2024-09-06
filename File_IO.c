
#include <stdio.h>

#include <stdio.h>
int main()
{

// Reading the file
FILE *ptr = NULL;
char string[50] = " rewritng the name: Gausul Wara Imam";
ptr = fopen("fileReadWrite.txt", "r");
fscanf(ptr, "%s", string);
printf("%s\n", string );

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
  fclose(ptr);
  return 0;
}