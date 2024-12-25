#include <stdio.h>
#include <stdlib.h>



int array[50];
int rear = - 1;
int front = - 1;

void insert(int add_item) {
    if (rear == 50 - 1)
        printf("Queue Overflow \n");
    else {
        if (front == - 1)
            front = 0;
        rear = rear + 1;
        array[rear] = add_item;
    }
}

void delete() {
    if (front == - 1 || front > rear) {
        printf("Queue Underflow \n");
        return;
    } else {
        printf("Element deleted from queue is : %d\n", array[front]);
        front = front + 1;
    }
}

void display() {
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", array[i]);
        printf("\n");
    }
}

int main() {

    insert(10);
    insert(20);
    insert(30);
    display(); // Queue is : 10 20 30

    delete(); // Element deleted from queue is : 10
    display(); // Queue is : 20 30

    return 0;
}
