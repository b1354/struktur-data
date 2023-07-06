
# Pointer

## Pengertian

Pointer adalah variabel yang berisi lokasi memori variable yang lain.

__Contoh :__

```
int *ptr;
int a=100

ptr = &a // 100
```

## pointer dengan array

Secara default pointer jika ditambahkan ke array, maka akan menunjuk
indeks ke-0 dari array tersebut

__Contoh :__

```
int *arrptr;
int arr[5] = {1,2,3,4};

arrptr = arr // 1
```

## pointer dengan function

Pointer juga dapat digunakan sebagai reference ke function, tidak seperti pointer biasa
pointer ke fungsi menunjuk pada ``code`` bukan pada ``data``. Function pointer juga
tidak mengalokasikan memori.

__Contoh :__

```
void func(int a) {
  printf("%d\n", a);
}

int main() 
{
  void (*func_ptr)(int) = &func;

  *func_ptr(2) // 2

  return 0;
}
```

jika tanda ``*`` dan ``&`` dihilangkan program dapat tetap berjalan, contoh jika dihilangkan:

```
void func(int a) {
  printf("%d\n", a);
}

int main() 
{
  void (*func_ptr)(int) = func; // & dihilangkan

  func_ptr(2) // * dihilangkan

  return 0;
}
```

> __NOTE:__
pada saat pendeklarasian function pointer menggunakan ``()`` tambahan, karena
jika tidak menggunakan kurung tambahan (__contoh:__ ``void *fucn_ptr(int)``)
akan membuat sebuah fungsi yang mengembalikan pointer void.
