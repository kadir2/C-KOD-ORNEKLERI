#include <stdio.h>

int main(){

int a1=70;
int *ptr;

ptr=&a1;

printf("a1 in adresi: %p \nptr nin değeri: %p \n\n",&a1,ptr); //p adres gösterimi için kullanılır
printf("a1 in değeri: %d \n*ptr nin değeri: %d \n\n",a1,*ptr);
printf("comlpement lerin gösterimi\n&*ptr : %p\n*&ptr : %p",&*ptr,*&ptr); //operatörler birbirini yok ediyor

printf("\n\n%d\n%p",*&*ptr,&*&ptr); //başka bir yok etme gösterimi
return 0;
}
