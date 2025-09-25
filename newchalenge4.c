#include <stdio.h>
#include <stdlib.h>



int main ()
{
  float T[10];
  float s,p,m;
  int i;

  printf("veuillez saisir les element du tableau \n");
  for ( i = 0; i < 10; i++)
  { 

    printf("T[%i]=",i);
    scanf("%f",&T[i]);
  }
  s=0;
  p=1;
  for ( i = 0; i < 10 ; i++)
  {
    s=s+T[i];
    p=p*T[i];
  }
  m=s/10;
printf("la somme :%.2f \n",s);
printf("le produit :%.2f \n",p);
printf("le moyenne :%.2f \n",m);

return 0;

  






}