#include <stdio.h>

int main() {
  int i, n, faktoriyel = 1;

  printf("Bir sayi giriniz: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    faktoriyel *= i;
  }

  printf("%d'nin faktoriyeli: %d\n", n, faktoriyel);

  return 0;
}
