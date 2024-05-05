#include <stdio.h>
#include <ctype.h>

int main(){

printf("%s \n",isdigit('3') ? "3 sayıdır" : "3 sayı değildir");
printf("%s \n",isalpha('h') ? "h harftir" : "h harf değildir");
printf("%s \n",isalnum('$') ? "$ sayı ya da harf" : "$ sayı yada harf değildir");
printf("%s \n",isxdigit('A')?"A hexadecimal dır" : "A hexadecimal eğildir");
printf("%s \n",islower('g') ? "g küçük harftir" : "g küçük harf değildir");
printf("%s \n",isupper('m') ? "m büyük harftir" : "m büyük harf değildir");

printf("%s \n",isspace('\n') ? "\n boşluk karakteridir" : "boşluk karakteri değildir"); // ascii 32
printf("%s \n",isblank('\t') ? "\t boşluk karakteridir" : "\t boşuk karakteri değildir"); 
printf("%s \n",iscntrl('\n') ? "\n kontrol karakteridir" : "\n kontrol karakteri değildir");
printf("%s \n",ispunct(':') ? ": noktalama karakteridir" : ": noktalama karakteri değildir");
printf("%s \n",isprint('$') ? "$ basılabilir karakterdir" : "$ basılabilir karakter değildir");
printf("%s",isgraph('+') ? "+ yazıcıda basılabilir" : "+ yazıcıda basılamaz");
return 0;
}
