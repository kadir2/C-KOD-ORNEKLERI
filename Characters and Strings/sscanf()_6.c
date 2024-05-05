#include <stdio.h>
#include <stdlib.h>


int main(){

int x;
float y;
char s[80]="2437 7346.544";

sscanf( s, "%d%f",&x,&y); //s den aldıklarını x ve y ye atıyor


printf("tam sayı:%d\nkesirli:%.2f",x,y);
return 0;
}
