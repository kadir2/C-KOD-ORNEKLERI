#include <stdio.h>
#include <stdlib.h>

struct Node{
	
int data;
struct Node *next;
};

int main(){

struct Node *head;
head = (struct Node*)malloc(sizeof(struct Node));
head->data = 45;
head->next = NULL;

struct Node *iter;
iter = head;


for(int i = 1; i < 8; i++){
    struct Node *r;
    r = (struct Node*)malloc(sizeof(struct Node));
    r->data = head->data + 5*i ;
    r->next = NULL;
    iter->next = r;
    iter = r;
}
iter = head;

while(iter != NULL){
    printf("%d\n", iter->data);
    iter = iter->next;
}


while(head != NULL){
    struct Node *temp = head;
    head = head->next;
    free(temp);
}


return 0; 
}
