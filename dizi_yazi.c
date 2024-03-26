#include <stdio.h>

int main(){

char a[]="xyzt";
char b[]={'m','n','c','d','\0'};

printf("%s \t ",a);
printf("%c \n",a[0]);


printf("%s \t ",b);
printf("%c",b[1]);


return 0;
}

