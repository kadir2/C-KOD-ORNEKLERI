
// KÜTÜPHANE KODLARI

float çarp(float a, float b, float c){
float sonuç;

return a*b*c;

}


float böl(float a, float b, float c){

return a*b/c; 

}



float yuvarla(float a){

return printf("\n%.f",a);
}


// MAİN KOD 

#include <stdio.h>
#include "kütüp.h"

int main(){

printf("%.2f",çarp(2,3,4) );


float a=böl(3,4,2);
while(a > 0 )
{
    printf("\nİTÜ");
    a--;
}
yuvarla(3.8);


return 0;
}
