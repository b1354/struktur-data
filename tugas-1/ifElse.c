#include<stdio.h>

int main()
{
  int bil1, bil2, bil3;

  printf("masukan bilangan 1: ");
  scanf("%d", &bil1);

  if (bil1 <= 10)
  {
    printf("selesai\n");
    return 0;
  }

  printf("masukan bilangan 2: ");
  scanf("%d", &bil2);
  
  if (bil2 <= 15)
  {
    printf("selesai\n");
    return 0;
  }

  printf("masukan bilangan 3: ");
  scanf("%d", &bil3);

  if (bil3 - bil2 - bil1 < 1 )
  {
    printf("Selamat anda pemenang\n");
    return 0;
  }

  printf("selesai\n");
  return 0;
}