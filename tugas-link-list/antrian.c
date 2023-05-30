// antrian penambahan data dilakukan di tail
// pengnghapusan data dilakukan di head
#include<stdio.h>
#include<stdlib.h>

// mendefinisikan perintah untuk clear console
// di tiap sistem operasi
#ifdef _WIN32
#define CONSOLE_CLEAR "cls"
#else
#define CONSOLE_CLEAR "clear"
#endif

struct antrian {
  int nomor;
  struct antrian* berikut;
} *head, *current, *tail;

void pushData ()
{
  current = (struct antrian*)malloc(sizeof(struct antrian));
  
  if (head==NULL) {
    current->nomor = 1;
    head = tail = current;
  }
  else {
    // mengambil data dari node sebelumnya lalu ditambah 1
    current->nomor = tail->nomor+1;
    tail->berikut = current;
    tail = current;
  }

  tail->berikut = NULL;
}

void delData() {
  if (tail!=head) {
    current = head->berikut;
    free(head);
    head = current;
  }
  return;
}

void printAntrian() {
  current = head;
  while(current) {
    if (current->berikut) {
      printf("%i -> ",current->nomor);
    } else {
      printf("%i",current->nomor);
    }
    current = current->berikut;
  }
  printf("\n");
}

int main() {
  int input;
  int repeat = 1;

  while(repeat) {
    system(CONSOLE_CLEAR);
    printf("list antrian:\n");
    printAntrian();
    printf("==Nomor Antrian Puskesmas==\n");
    printf("menu:\n");
    printf(" 1. ambil nomor antrian\n");
    printf(" 2. panggil nomor\n");
    printf(" 0. Exit\n");
    printf("----------------------------\n");
    printf("masukan perintah (1-2)?: ");
    scanf("%d", &input);
    system(CONSOLE_CLEAR);

    switch(input) {
      case 1:
        pushData();
        // printf("nomor antrian baru: %d", current->nomor);
        break;
      case 2:
        delData();
        // printf("panggilan untuk nomor: %d", head->nomor);
        break;
      case 0:
        repeat = 0;
        break;
      default:
        printf("perintah tidak dikenali (ENTER untuk melanjutkan)!!\n");
        break;
    } 
  }
}