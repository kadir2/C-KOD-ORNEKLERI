#include <stdio.h>

void sayi_yazdir() {
  static int sayi = 1; // 'sayi' bir static değişkendir
  printf("Sayi: %d\n", sayi++);
}

int main() {

  sayi_yazdir();
  sayi_yazdir();
  sayi_yazdir();
 
  return 0;
}
