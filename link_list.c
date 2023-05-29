#include<stdio.h>
#include<stdlib.h>
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
  printf("data %d berhasil dimasukan\n", dataPush);
}

void printData() 
{
  current = head;
  // printf("%d\n", current->data);
  // printf("%d\n", current->berikut);
  
  while(current) {
    printf("%d\n",current->data);
    current = current->berikut;
  };
}

int main() 
{
  int input;
  char ulang = 'y';

  while (ulang == 'y') {
    printf("masukan bilangan: ");
    scanf("%d", &input);
    pushHead(input);
    printf("\nmasukan lagi(y/n)?");
    scanf("%s", &ulang);
  };

  printData();
}