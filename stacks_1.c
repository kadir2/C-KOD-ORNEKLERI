#include <stdio.h>
#include <stdlib.h>

int size = 2;
int* array;
int top=0;

int pop(){

    if(top<=size/4){
        int *array2 = (int*)malloc(sizeof(int)*size/2);
        for(int i=0 ; i<size ; i++){
            array2[i]=array[i];
        }
         free(array);
        array=array2;
        size /= 2;
    }
    return array[--top];
}

void push(int a_){
    if(top>=size){
        int *array2 =(int*)malloc(sizeof(int)*size*2);
    
    for(int i=0 ; i<size ; i++)
        array2[i]=array[i];
    free(array);
    array=array2;
    size *= 2;

    }
    array[top++]=a_;
}

void display(){

    for(int i = 0; i<top ; i++){

        printf("%d ",array[i]);
    }
    printf("\n");

}





int main(){

array = (int*)malloc(sizeof(int)*2);


printf("size:%d\n",size); //size:2

for(int i=1;i<=7;i++)
    push(i*10);

display();  //10 20 30 40 50 60 70

for(int i=1;i<=3;i++)
    pop();

display();  //10 20 30 40


printf("size: %d top:%d\n",size,top); //size: 8 top:4


    return 0;
}
