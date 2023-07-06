#include<stdio.h>

void hello(char message[50])
{
  printf("%s\n", message);
}

int main()
{
  void (*ptr_hello)(char[50]) = hello;

  ptr_hello("hello world");
}