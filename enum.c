#include <stdio.h>

enum günler {pzt=1,sal,çrş,per,cum,cmt,pzr} ;
void gün();

int main(){


enum aylar {ock,şbt,mrt,nsn,may,haz,tem,ağu,eyl,ekm,kas,ara};

int buay=mrt;

printf("bu ay %d. ay\n", buay+1);

gün();

return 0;
}

void gün(){

enum günler bugün;
bugün=per;

printf("bugün %d. gün",bugün);

}
