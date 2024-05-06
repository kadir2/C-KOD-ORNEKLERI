#include <stdio.h>
#include <string.h>


int main( void ){


char x[] = "merhaba dunya";


printf("%s\n",memchr(x,'h',10)); //ilk 10 karakter arsından x te h aranır ve sonrası basılır

return 0;
}
