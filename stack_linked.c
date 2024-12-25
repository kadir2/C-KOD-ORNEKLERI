#include <stdio.h>
#include <stdlib.h> // malloc ve free için gerekli

struct Node {
    int data;
    struct Node* next;
};

struct Node* push(struct Node* head, int veri) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    

    temp->data = veri;
    temp->next = head;
    return temp;
}

struct Node* pop(struct Node* head, int* veri) {
    
    struct Node* temp = head;
    *veri = head->data; // Çıkarılan elemanın değerini geri döndürmek için
    head = head->next;
    free(temp); // Belleği serbest bırak
    return head;
}

int main() {
    struct Node* head = NULL; // Boş bir stack başlangıcı

    // Stack'e eleman ekle (push işlemi)
    for (int i = 1; i <= 5; i++) {
        head = push(head, i * 10);
    }

    // Stack'ten eleman çıkar (pop işlemi)
    int veri;
    while (head != NULL) {
        head = pop(head, &veri);
        printf("Çıkarılan eleman: %d\n", veri);
    }

    return 0;
}
