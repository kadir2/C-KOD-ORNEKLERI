#include <stdio.h>
#include <string.h>


int main(){


char x[] = "merhaba";
char y[]="selamlar";
char *z ="sessiz bir dag koyu";
char *q ="a       b";

printf("%lu\n",strlen(x)); //dizideki terimler sayılır  ancak sondaki  \0 sayılmaz !!
printf("%lu\n",strlen(y));
printf("%lu\n",strlen(z));
printf("%lu\n",strlen(q));
  
return 0;
}
