#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

int main(){

struct node* head = (struct node*)malloc(sizeof(struct node));

head->data = 15;
head->next = NULL;
head->prev = NULL;

struct node *iter;
iter = head;

for(int i=1; i<=5; i++){

iter->next = (struct node*)malloc(sizeof(struct node));
iter->next->data = head->data + 5*i;
iter->next->prev = iter;
iter = iter->next;
iter->next= NULL;
}
iter=head;

while(iter != NULL){
    printf("%d\n",iter->data);
    if(iter->next==NULL)
        break;
    iter = iter->next;    
    } 

while(iter != NULL){
    printf("%d\n",iter->data);
    if(iter->prev==NULL)
        break;
    iter = iter->prev;

} 
}
