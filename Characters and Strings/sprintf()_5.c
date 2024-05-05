#include <stdio.h>
#include <stdlib.h>


int main(){

int x;
float y;
char s[80];

scanf("%d%f",&x,&y);

sprintf( s ,"tam sayı:%d\nkesirli sayı:%.2f",x,y);

printf("%s",s);
return 0;
}
