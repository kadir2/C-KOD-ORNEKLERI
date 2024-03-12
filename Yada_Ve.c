#include <stdio.h>

int main(){

int a=5;
int b=1;

while(a >= b || 4==b) //ikisinden biri doğruysa çalışır, ilki doğruysa ikinciyi atlar.
printf("%d ",a--);

printf("\na son =%d",a);

if(a==0 && b!=2) //ikiside doğruysa çalışır, ilki yanlışsa direkt atlar.
printf("\nif çalıştı");

return 0;
}
