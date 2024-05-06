#include <stdio.h>


int main(){

int a;
int *ptr;

printf("merhaba bu bir yazidir%n\n",&a); //kendinden önceki terimleri sayar '\n' i de saymak istersek bir terimdir
printf("yukarudaki dizinin terim sayısı %d\n\n",a);

a = printf("bu yazi 23 karakterdir\n"); // yazıda terim sayısı hesplanırken ASLA turkce karakter kullanma hata olur!!
    printf("gerçekten: %d\n\n",a);

printf("a'nin adresi: %p\tptr'nin adresi: %p\n", &a , ptr); //adresler böyle basılır

printf("%% işareti bu şekilde basılır");

return 0;
}
