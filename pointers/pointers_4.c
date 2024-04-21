#include <stdio.h>

int main(){

char *ptr="5itu canavarı";
printf("%c \n",*&*ptr);
printf("%c",*(ptr+3));
  
return 0;
}
