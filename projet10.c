#include <stdio.h>

int main () {

   int nombre;
   int unite;
   int dix;
   int result;


printf("Entrez un nombre  a deux chiffres  ---> ");
scanf("%d",&nombre);

unite = nombre % 10;
dix = nombre / 10;

result =unite * 10 + dix ;

printf("Le nombre inverse est :%d\n",result);


return 0 ;








}