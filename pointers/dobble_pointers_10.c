#include <stdio.h>


int main(){

int a[]={2,4,6,7};
int *b;
int **c;
b= a;
c= &b;

printf("%d %d %d",a[1],*(b+3),**c);

return 0;
}
