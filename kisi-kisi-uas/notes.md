# Struktur bahasa C
Program C berisi satu fungsi atau lebih di mana suatu fungsi didefinisikan
sebagai kelompok pernyataan yang melakukan tugas yang jelas
suatu fungsi ditulis dalam urutan logis untuk menyelesaikan tugas tertentu.
fungsi utama "main()" adalah fungsi yang paling penting dan merupakan bagian dari setiap program C
dimana fungsi main adalah fungsi yang akan di jalankan saat menjalankan program

# Rekursi
Rekursi adalah suatu pengulangan atau loop dengan cara memanggil diri sendiri.

__contoh :__
```
#include<stdio.h>

int faktorial(int n)
{
  if(n<2) {
    return 1;
  } else {
    return n*faktorial(n-1)
  }
}
```

# Pointer 
Pointer adalah variabel yang berisi lokasi memori variable yang lain.

Pointer digunakan untuk: 
- meneruskan informasi antar fungsi
- mengembalikan banyak item data dari suatu fungsi melalui fungsi argumen
- memberikan cara alternatif untuk mengakses elemen individual dari sebuah array
- melewatkan array dan string sebagai argumen fungsi
- membuat struktur data yang kompleks, seperti pohon/tree, daftar tertaut/link list, tumpukan/stack, antrian/queue, dan graph
- pointer digunakan untuk alokasi memori dinamis

__contoh :__
```
int *pnum;
char *pch;
float *pfloat;
```

# link list
Link list didefinisikan sebagai daftar, didefinisikan juga sebagai hubungan/kaitan.
Link list jika didefinisikan secara bebas adalah daftar yang saling terkait. dimana daftar merupakan representasi dari data.
