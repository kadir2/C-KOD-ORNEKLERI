#include <stdio.h>
#include <string.h> //yeni bir kütüphane

int main(){

char a[]="Merhaba Dunya";
char k[25];
char m[80];

printf("%s\n",strcpy(k,a)); //a yı k ya kopyalıyor ve basıyor

strncpy(m,a,10); //a yı m ye yalnızca 10 karakter kopyalıyor 

m[10]='\0'; // son terim \0 yapılıyor (gerekli)

printf("%s",m);


return 0;
}
