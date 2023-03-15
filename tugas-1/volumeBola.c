#include<stdio.h>
#define PI 3.14

int main ()
{
  float volume, r;

  printf("masukan r: ");
  scanf("%f", &r);

  volume = (4.0/3.0) * (PI * (r*r*r));

  printf("hasil %dcm³\n", (int) volume);

  return 0;
}
