#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

srand(time(0)); // sayaç başlatılıyor

float a;
float a1;

a= 1 + rand() % 100; // random sayı 1 ile 100 arasına sıkışıyor

a1 = a/4.2;

printf("İlk sayı: %.1f\n",a1);

printf("Yuvarla: %.f\n",round(a1));

printf("Üste yuvarla: %.f\n",ceil(a1));

printf("Alta yuvarla: %.f",floor(a1));

return 0;
}