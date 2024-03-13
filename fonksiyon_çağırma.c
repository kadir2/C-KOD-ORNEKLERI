#include <stdio.h>
#include <math.h>

int func( int i,int j );

void abcd(){
    int a=0;
    int b=0;
    printf("\n%d\n%d",a,b);
    printf("\n%d",(a+=5)*(b-=4));
 
}



int main(){

int a=10;
int b=7;

printf("%d",func( a , b ));

abcd();
}



int func( int i, int j ){
int topla;

topla = pow(2,5);
return topla;
}