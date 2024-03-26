#include <stdio.h>

int main(){


int a[8]={4,16,64,256,1024};   // 8 terim var 5 tanesi belli geriri "0"
int b[]={3,9,27};             //terimler kullanılırken dizideki terimlerin adedini geçmeyecekse içerisi boş "[]" olabilir

printf("%d \n",a[2]);
printf("%d\n",a[6]);   //aşan terimler "0"

printf("%d\n",b[2]);   



int c[]={2,3,4,5,6};
//printf("%d",c[7]);     Dizinin kaç terimli olduğu belirtilmediğinden "0" yazmak yerine Hata verecekti

return 0;
}

