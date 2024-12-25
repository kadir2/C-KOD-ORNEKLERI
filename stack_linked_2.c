#include <stdio.h>
#include <stdlib.h> // malloc ve free için

struct Node {
    int data;
    struct Node* next;
}*head=NULL;

//struct Node* head = NULL; // Global olarak tanımlandı, başka bir yol

void push( int veri) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = veri;
    temp->next = head;
    head = temp;
   
}

int pop() {
    
    struct Node* temp = NULL;
    int i=head->data;
    temp = head;
    head = head->next;
    free(temp);
    return i;
}

int main() {

    // Stack'e eleman ekle (push işlemi)
    for (int i = 1; i <= 10; i++) {
        push(i*10);
        printf("Eklenen eleman: %d\n", i*10);
    }

    // Stack'ten eleman çıkar (pop işlemi)
    int veri;
    while (head != NULL) {
        veri = pop();
        printf("Çıkarılan eleman: %d\n", veri);
    }

    return 0;
}
