#include <stdio.h>


int main(){

printf("%e\n",1234567.89);
printf("%e\n",+1234567.89); //e ve E üstel notation
printf("%e\n",-1234567.89);
printf("%E\n",1234567.89);
printf("%f\n",1234567.89);
printf("%g\n",1234567.89); // float ya da üstel olan gösterimlerden birini seer ve o formatta yazdırır
printf("%G\n",1234567.89);


return 0;
}
