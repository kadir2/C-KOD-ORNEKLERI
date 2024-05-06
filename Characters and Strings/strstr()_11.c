#include <stdio.h>
#include <string.h>

int main(){

char a[50]= "kasabadaki balıkcı kulubesinin bahcesi";
char b[]="lık";
char *x;

x = strstr(a,b); //a nın içinde b yi bulduğu yerden itibaren x'e aktarır (soldan taramaya başlar)

printf("%s\n",x);


return 0;
}
