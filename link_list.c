#include<stdio.h>
// List didefinisikan sebagai daftar
// link didefinisikan sebagai hubungan/kaitan
// link list didefinisikan secara bebas adalah daftar yang saling terkait

// membuat link list
// struct adalah tipe data yang dapat menyimpan beberapa tipe data lain
struct node {
  int data;
  struct node* berikut;
}*head, *tail, *current;

// untuk memesan memori, menggunakan malloc (memmory allocation)
// urutan perpindahan head, tail, dan currentnya harus sesuai urutan, jika tidak maka link listnya tidak akan tersambung
void pushHead(int dataPush)
{
  current = (struct node*)malloc(sizeof(struct node));
  current->data=dataPush;
  if (head==NULL) {
    head = tail = current;
  }
  else {
    current->berikut=head;
    head=current;
  }
  tail->berikut=NULL;
}