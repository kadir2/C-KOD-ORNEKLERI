#include <stdio.h>
int func(int x,int y);
int func1(int x,int y);
int main(){

int (*a[2])(int x,int y);
a[0]=func;
a[1]=func1;
for(int i=0; i<2;i++){
printf("%d\n",a[i](i+4,i+1));

}


return 0;
}
int func(int x,int y){

return x + y + 2;

}

int func1(int x,int y){

return x*y;

}
