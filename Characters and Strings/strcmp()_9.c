#include <stdio.h>
#include <string.h>

int main(){

char a[40]= "Merhaba Dunya";
char b[]= "Merhaba Dunya";
char *c= "Merhaba Galaksi";

printf("%d\n%d\n%d\n\n",strcmp(a,b),strcmp(a,c),strcmp(c,a)); // strcmp(c,a) c nin farklı ilk terimi a nınkinden büyük olduğundan (+)

printf("%d\n%d\n%d",strncmp(a,c,7),strncmp(b,c,9),strncmp(c,b,9)); // strcmp(a,c,7) ilk 7 terimde hepsi eşit gittiğinden 0


return 0;
}
