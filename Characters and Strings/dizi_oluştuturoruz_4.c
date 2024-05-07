#include <stdio.h>


int main(void)
{
char c;

char sentence [ 80 ];
int i = 0; 

puts("Enter a line of text:" );


while (( c = getchar()) != '\n') {  //sıryla getchar c ye harfleri aktarır
sentence[i++] = c;
} 

sentence[i] = '\0';
puts("\nThe line entered was:");
puts(sentence );
return 0; 
}
