#include<stdio.h>

int main()
{
  int data[4];
  int dataSize = sizeof(data) / sizeof(int);
  int max;

  for (int i = 0; i < dataSize; i++)
  {
    printf("Masukan data ke %d: ", i+1);
    scanf("%d", &data[i]);
  }

  max = data[0];

  for (int i = 0; i < dataSize; i++)
  {
    if(max < data[i]) {
      max = data[i];
    }
  }

  printf("nilai terbesarnya adalah: %d\n", max);

  return 0;
}