#include <stdio.h>
#include <stdlib.h>


int main(){

char *abc="571.2 sayısı";
double b;
char *kalan;

b =strtod(abc , &kalan);

printf("abc =%s \nsayı =%.2f\nkalan terimler =%s",abc , b , kalan);


return 0;
}
