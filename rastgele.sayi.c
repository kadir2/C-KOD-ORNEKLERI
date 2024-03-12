#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(0)); // sayaç başlatılıyor

int a;

a= 1 + rand() % 100; // random sayı 1 ile 100 arasına sıkışıyor

printf("%d",a);

return 0;
}
