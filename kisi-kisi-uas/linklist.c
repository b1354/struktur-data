// simple linklist dengan pushHead dan pushTail
// jika ingin menghapus node gunakan free()!!
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    
    struct node* next;
} *head, *current, *tail;

void pushHead(int value) {
    current = (struct node*) malloc(sizeof(struct node));
    current->value = value;
    if (head == 0 || tail == 0) {
        head = tail = current;
    } else {
        current->next = head;
        head = current;
    }
}

void pushTail(int value) {
    current = (struct node*) malloc(sizeof(struct node));
    current->value = value;
    if (head == 0 || tail == 0) {
        tail = head = current;
    } else {
        tail->next = current;
        tail = current;
    }
}

void printAllData() {
    current = head;
    
    while (current) {
        printf("%d, ", current->value);
        current = current->next;
    }
}

int main() {
    int method=1;
    int input;
    
    while(method) {
        printAllData();
        
        printf("\n\n");
        printf("1. pushHead\n");
        printf("2. pushTail\n");
        printf("enter method: ");
        scanf("%d", &method);
        printf("enter value: ");
        scanf("%d", &input);
        if (method == 1) {
            pushHead(input);
        } else if (method == 2) {
            pushTail(input);
        } else {
            break;
        }
    }
}