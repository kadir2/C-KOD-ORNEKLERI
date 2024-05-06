#include <stdio.h>
#include <string.h>

int main(){

char a[90]= "Merhaba "; //içine kopyalanacak dizinin içi boş olamaz (a[])
char k[]= "Dunya";
char m[80]= "";

printf("%s\n",strcat(a,k)); //k yı a nın sonuna ekliyor

strncat(m,a,7);  //a yı m nin sonuna 7 karakteri ekliyor 
    printf("%s\n",m); 

printf("%s",strcat(m,a));


return 0;
}
