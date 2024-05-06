#include <stdio.h>
#include <string.h>


int main(){


char x[] = "merhaba dunya";
char y[] = "merhaba dana";


printf("%d\n",memcmp(x,y,4)); //ilk 4 karakter aynı sonuç 0
printf("%d\n",memcmp(x,y,10)); //ilk 10 karakterde a u dan önce geldiğinden +
printf("%d",memcmp(y,x,10));  //ilk 10 karakterde a u dan önce geldiğinden -
  
return 0;
}
