
// Write a program to store the details of 3 employees from user defined data. Use the structure declared above.
// #include <stdio.h>
// #include <string.h>
// struct employee {

//     char name[10];
//     int age;
//     float salary;
//     char gender;

//   };

// int main()
// {

//   struct employee e[3]; 
// // pahla
//   strcpy(e[0].name,"khurram");
//   e[0].age = 21;
//   e[0].salary = 50000.0;
//   e[0].gender = 'M';

// // dusra
// strcpy(e[1].name,"ali");
// e[1].age = 25;
// e[1].salary = 60000.0;
// e[1].gender = 'M';

// // teesra
// strcpy(e[2].name,"gausul");
// e[2].age= 21;
// e[2].salary= 12000;
// e[2].gender = 'M';
  
//   for(int i =0; i<3; i++){
  
//   printf("%s\n", e[i].name);
//   printf("%d\n", e[i].age);
//   printf("%f\n", e[i].salary);
//   printf("%c\n", e[i].gender);
//   }

//   return 0;
// }

// u can isert data without d3ecaring its type like above 

// #include <stdio.h>
// #include <string.h>

// struct structure 
// {
//   char name[10];
//   int age;
//   float salary;
// };


// int main()
// {
//   struct structure s = {"a", 24, 'hello',2633.2};


//   printf("%s\n",s.name);
//   printf("%d\n",s.age );
//   printf("%d\n", s.salary);
    
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct structure 
// { 
//   int code;
//   char name[10];
//   int age;
//   float salary;
// };

// #include <stdio.h>
// int main()
// {
//   struct structure s = {"a", 24, 'hello',2633.2};
//   struct structure *ptr;
//   ptr = &s;
//   printf("%d", ptr-> code);
//   return 0;
// }
 

//  4. Write a program to illustrate the use of arrow operator → in C.

#include <stdio.h>
#include <string.h>

struct Person{
  char name[70];
  int age;
};
int main()
{
  struct Person person;
  struct Person *personPtr = &person;
  
   strcpy(person.name, "John");
  person.age = 21;

  printf("%s\n",(*personPtr).name);
  printf("%d\n",(*personPtr).age );

  // with arrow 
  printf("%s\n",(*personPtr).name);
  printf("%d\n",(*personPtr).age );

  printf("%s\n", personPtr->name);
  printf("%d\n", personPtr->age);

  return 0;
}


