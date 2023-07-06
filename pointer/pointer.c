#include<stdio.h>

// pointer adalah tipe data yang menunjuk alamat memori dari suatu variabel
// pointer tidak menyimpan data, tetapi pointer menyimpan alamat

// sub program bisa mengganti data di main program dengan call by reference, menggunakan pointer

// Mendeklarasikan pointer
// Format data_type *pointer_name

int basic_pointer () {
  // contoh pointer
  int num, *pnum;
  pnum = &num;

  printf("Enter the number: ");
  scanf("%d", pnum);
  printf("The number that was entered is: %d", pnum);
  return 0;
}

int array_pointer() {
  int a[5] = {1,3,2,6,4};
  int *pparray; // pastikan tipe data pointer dan data yang ditunjuk sama
  pparray=a; // default nya akan memberikan alamat index ke 0;

  // mencetak index ke 0
  printf("%d",*pparray);
  
  // mencetak index ke 0
  pparray++;
  printf("%d", *pparray);

  return 0;
}

int main() {
  basic_pointer();
  array_pointer();
}