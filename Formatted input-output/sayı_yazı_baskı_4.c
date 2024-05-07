#include <stdio.h>


int main(){

int a= 654;
double b=123.728646;
char c[]="merhaba dunya";

printf("%.5d\t%.2d\n%.3f\n%.3e\n%.3g\n\n",a,a,b,b,b); /* %.3e kullanımında e den önce 3 sayı basılır
                                                        %.3g kullanımında 3 haneli baskı istenir ve g float olarak terxih yapar */

printf("%.10s\n",c); //maksimum 10 karakter basılır
printf("%19s",c); //toplam 18 karakter yer ayrılır

return 0;
}
