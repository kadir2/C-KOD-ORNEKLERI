#include <stdio.h>

int main(){

int a[5]={10,15,20,25,30};
int *ptr=a;

printf("a[0]=%d  a[1]=%d  a[2]=%d\n\n",a[0],a[1],a[2]);
printf("*(a+0)=%d  *(a+1)=%d  *(a+2)=%d\n\n",*(a + 0),*(a + 1),*(a + 2));
printf("ptr[0]=%d  ptr[1]=%d  ptr[2]=%d\n\n",ptr[0],ptr[1],ptr[2]);
printf("*(ptr + 0)=%d  *(ptr + 1)=%d  *(ptr + 2)=%d",*(ptr + 0),*(ptr + 1),*(ptr + 2));


return 0;
}
