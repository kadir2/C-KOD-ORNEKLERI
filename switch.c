#include <stdio.h>

int main()
{

int sayi;

printf("sayı(1-5):");
scanf("%d",&sayi);


switch(sayi) // tam sayı cinsinden olmalı.
{
case 1:printf("bir");break;
case 2:printf("iki");break;
case 3:printf("üç");break;
case 4:printf("dört");break;
case 5:printf("beş");break;
default: printf("yanlış sayı!!");break;

}
return 0;

}