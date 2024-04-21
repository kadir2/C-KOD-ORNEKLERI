#include <stdio.h>

void func();

int main(){

int x=10;
const int *qrt;

qrt = &x;

*qrt =20; // error , *qrt nin değeri değiştirilemez

func();
return 0;
}

void func(){

int z;
int y=5;
int *const abc = &y;

*abc = 40;
abc = &z; // error , pointers değiştirilemez

}
