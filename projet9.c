#include <stdio.h>
#include <string.h>

int main () {
    const char teree[] = "_";
    char isbn[17];
    char GS1[3];
    char Identifiant[1];
    char Code[3];
    char Numero[5];
    char Chiffre[1];
    int i = 0;
    
     
    printf("Entrez your ISBN:" );
    scanf ("%s",isbn);
    printf("%s\n",isbn);
     
     for (int i = 0; i < 3; i++)
     {
        GS1[i] = isbn[i];
     }
     
     
      Identifiant[0] = isbn[4];
     
     

     for ( i = 6; i < 9 ; i++)
     {
       Code[i-6] = isbn[i];
     }

     
     for ( i = 10 ; i < 15; i++)
       {

      Numero[i-10] = isbn [i];

       }
       

     Chiffre [0] =isbn[16];

    printf("GS1 : %s\n", GS1);
    printf("Identifiant : %s\n", Identifiant);
    printf("Code : %s\n", Code);
    printf("Numero : %s\n", Numero);
    printf("Chiffre de contrôle : %s\n", Chiffre);
     
    

     
     return 0 ;





      }

