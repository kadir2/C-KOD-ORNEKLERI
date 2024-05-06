#include <stdio.h>
#include <string.h>


int main( void ){


char x[] = "abcdefghijklmno";

memmove(x,&x[2], 10);

printf("%s\n", x);

return 0;
}
