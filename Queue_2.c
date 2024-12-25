#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int x){
    if(front == NULL && rear == NULL){ // ilk eleman eklenirken
        struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = x;
        temp->next = NULL;
        front = rear = temp;
        return;
    }
    else{
        struct Node *temp = (struct Node*)malloc(sizeof(struct Node)); 
        temp->data = x;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
    

};

int dequeue(){
    struct Node *temp = front;
    

    if(front == rear){ // tek eleman varsa
        front = rear = NULL;
    }
    else{
        front = front->next;
    }
    free(temp);
    return 0;
}

int main(){

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    printf("%d\n", front->data); // 2  ilk giren ilk cikar

    return 0;
}
