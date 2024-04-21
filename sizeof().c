#include <stdio.h>

int main(){

int a;
char x;
long double k;
int array[20];
int *ptr=array;


printf("a=%d \nx=%d \nk=%d \narray=%d \nptr=%d",sizeof(a),sizeof(x),sizeof(k),sizeof(array),sizeof(ptr));


return 0;
}
