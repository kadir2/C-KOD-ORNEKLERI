#include <stdio.h>


int main(){


printf("%6d\n",1746);

printf("%-6d\n\n",1746); //- en sola dayar

printf("%+d\n",1746);  //+ işareti yoksa başına + ekler
printf("%+d\n\n",-1746);

printf("% d\n",1746); // % d eğer pozitifse boşluk bırakır
printf("% d\n",-1746);



return 0;
}
