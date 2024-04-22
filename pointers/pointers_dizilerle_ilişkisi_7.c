#include <stdio.h>

void func(){

int x1=10;
int x2=10;
int x3=10;
int *ptr[3]={ &x1 , &x2 , &x3 };

for(int j=0; j<3; j++)
printf("x%d=%d  ", j+1, *ptr[j]);
}

int main(){

char *a[]={"itu","odtu","ytu"};

for(int i=0; i<3; i++)
printf("%s    %p\n",a[i],a[i]);


func();

return 0;
}
