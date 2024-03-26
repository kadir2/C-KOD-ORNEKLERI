#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(0)); // sayaç başlatılıyor

int a;
int b;
  
a= 1 + rand() % 100 ; // random sayı 1 ile 100 arasına sıkışıyor

printf("%d\n",a);

b= rand() % 100-50 ; // -50 ile 49 arası sayı üretiyor
printf("%d",b);  
return 0;
}
