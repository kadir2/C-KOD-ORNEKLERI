#include <stdio.h>
#include <stdlib.h>

void reverse (const char * const sPtr); /* prototype */

int main(void) {

char sentence[80]; /* create char array */

printf("Enter a line of text:\n");
/* use gets to read line of text */

gets(sentence);

printf("\nThe line printed backward is:\n");
reverse (sentence );

return 0;
}

void reverse (const char * const sPtr) {
/* if end of the string */
if (sPtr[0] == '\0') { /* base case */
return;
} /* end if */
else { /* if not end of the string */
reverse(&sPtr[1] ); /* recursion step */
putchar (sPtr [0] ); 
}
}
