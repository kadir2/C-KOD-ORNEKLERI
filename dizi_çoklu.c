#include <stdio.h>

int main(){


int a[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };

for(int i=0; i<=2; i++){ // satırları (row) belirliyor
    
    
    for(int j=0;j<=2; j++){ //sütunları (column) belirliyor
    printf("%d",a[i][j]);
    }
printf("\n");
}


printf("\n%p",a[2]); // a[2] nin adresini yazdırır
return 0;
}

