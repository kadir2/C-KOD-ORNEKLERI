#include <stdio.h>
int y=5,x=2;

void f1(int *p){     *p=*p+y;   } // x in ilk elemanı değiştirilir

int main(){

int x[5]={1,2,3,4,5};

printf("%d",*x); // x'in ilk elemanı basılır
f1(x);           // x f1'e götürülür
printf("%d",*x); // x'in ilk elemanı basılır

return 0;
}
