#include <stdio.h>

int main (){
int n,i;
int carre;

printf("veuillez ecrire un nombre :\n");
scanf ("%d",&n);

for ( i = 1; i*i <=n; i++)
{ 
     carre = i*i ;
   if  (carre % 2 == 0){
    printf ("%d\n",carre); 
   }
   
}

return 0;

}