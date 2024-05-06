#include <stdio.h>
#include <string.h>

int main(){

char a[]= "kasabadaki balıkcı kulubesinin bahcesi";
char b[]="lık";
char *xptr;

xptr = strtok( a, " "); //a yı boşluk karakterlerine göre böleriz


while(xptr != NULL){
printf("%s\n",xptr);
xptr = strtok(NULL, " "); //devamını da boşluk karakterine göre bölmek istiyoruz
}
return 0;
}
