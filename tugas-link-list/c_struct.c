#include <stdio.h>
#include <string.h>


struct Person {
  int data;
  char grade;
  float salary;
};

// cara lain untuk membuat struct
struct Person2 {
  char name[10];
} person2;

int main ()
{
  struct Person person1;

  // asign value
  person1.data = 1;
  person1.grade = 'a';
  person1.salary = 2.5;

  // print value
  printf("data: %d \n", person1.data);
  printf("grade: %c \n", person1.grade);
  printf("salary: %.1f \n", person1.salary);

  // asign value
  strcpy(person2.name, "bayu");
  // print value
  printf("person2 name: %s \n", person2.name);
}