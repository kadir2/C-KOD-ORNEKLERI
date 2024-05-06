#include <stdio.h>
#include <string.h>

int main(){

char a[40]= "köyde bir çiftlik evi";
char b= 'e'; //strchr karakter arayabilir
char *x;
char *y;

x = strchr(a,b); //a nın içinde b yi bulduğu yerden itibaren x e aktarır (soldan taramaya başlar)
y = strrchr(a,b); //a nın içinde b yi arar ama sağdan başlar

printf("%s\n",x);
printf("%s",y);

return 0;
}
