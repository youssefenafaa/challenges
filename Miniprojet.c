#include <stdio.h>
#include <string.h>
#define Max_etudiant 30
#define Max_notesn 4


typedef struct {
    char  cne[20];
    char  nom[40];
    char  prenom[40];
     float notes[4]; 
      float moyenne;
      } Etudiant;

Etudiant Class [30] ;
int nbEtudiants = 0;
void ajouter(){
    if (nbEtudiants>=  )
}







int main (){
int option; 


  


do
{
printf("ajouterEtudiant(3)\n");
printf("saisirNotes(2)\n");
printf("calculerMoyenneEtudiant(3)\n");
printf("calculerMoyenneGenerale(4)\n");
printf("afficherEtudiants(5)\n");
printf("afficherBulletin(6)\n");
printf("Quitter(0)\n");
printf(" option: ");
scanf("%d", &option);

switch ( option){
    case 1 :
    ajouter()
    break;
    case 2 :
    saisirNotes()
    break;
    case 3 :
    calculerMoyenneEtudiant()
    break;
    case 4 :
    calculerMoyenneGenerale()
    break;
    case 5:
    afficherEtudiants()
    break;
    case 6:
    afficherBulletin()
    break;
    case 0 :
    Quitter()
    break;
default:
    break;
}


while (option !=0);
return 0; 




}
}
