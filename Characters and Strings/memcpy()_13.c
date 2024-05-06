#include <stdio.h>
#include <string.h>


int main( void ){

char s1[ 18 ]; /* create char array s1 */
char s2[] = "bu yaziyi kopyala"; /* initialize char array s2 */
char s3[20];

memcpy(s1, s2, 18);

printf("%s\n", s1);

memcpy(s3,s2,8);
s3[8]='\0';

printf("%s",s3);

return 0; /* indicates successful termination */
}
