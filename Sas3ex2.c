#include <stdio.h>
#include <string.h>
#define Max_ETUDIANT 30 
#define Max_NOTES 4 
#define YEL "\e[0;33m" // Yellow
#define RESET "\e[0m" // Reset all attributes

typedef struct {
    char  cne[20];
    char  nom[40];
    char  prenom[40];
     float notes[4]; 
      float moyenne;
      } Etudiant;

Etudiant classe [Max_ETUDIANT];
int nbEtudiants = 0;
void ajouter(){
    if (nbEtudiants>= Max_ETUDIANT){
    printf("Limite atteinte \n");
    return;
}
Etudiant E;
printf("cne :");
scanf("%s",E.cne);
printf("nom :");
scanf("%s",E.nom);
printf("prenom :");
scanf("%s",E.prenom);

for (int i=0;i<Max_NOTES;i++)
{
    E.notes[i]=0;
}
   E.moyenne=0;
 classe[nbEtudiants]=E;
    nbEtudiants++;
printf("Etudiant ajoute\n");

}
void saisirNotes(){
if (nbEtudiants == 0)
{
    printf("Aucun etudiant ajoute\n");
    return;
}
 char  cne[20];
    printf("entrer le cne de l etudiant :\n");
    scanf("%s",cne);
    int trouve=0;
    for (int i=0; i <nbEtudiants;i++)
    {
        if (strcmp(classe[i].cne, cne) == 0){
        for (int j=0;j<Max_NOTES;j++)
        {
             do {
                    printf("Note %d : ", j + 1);
                    scanf("%f", &classe[i].notes[j]);
                } while (classe[i].notes[j] < 0  || classe[i].notes[j] > 20);
        }
       trouve = 1;
            break;
        }
    }
    if (!trouve) {
        printf("Etudiant introuvable.\n");  }
}    
void calculerMoyenneEtudiant() {
    if (nbEtudiants == 0) {
        printf("Aucun etudiant ajoute\n");
        return;
    }

    char cne[20];
    printf("entrer le cne de l etudiant  :\n ");
    scanf("%s", cne);

    int trouve = 0;

    for (int i = 0; i < nbEtudiants; i++) {
        if (strcmp(classe[i].cne, cne) == 0) {
            float somme = 0;
            for (int j = 0; j < Max_NOTES; j++) {
                somme += classe[i].notes[j];
            }
            classe[i].moyenne = somme / Max_NOTES;
            printf("Moyenne calculee ----->  %.2f\n", classe[i].moyenne);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Etudiant introuvable.\n");
    }
}

void calculerMoyenneGenerale(){
      if( nbEtudiants == 0)
{
      printf("Aucun etudiant \n");
      return;
}
float somme = 0;
        for (int i = 0; i < nbEtudiants; i++) {
            for (int j = 0; j < Max_NOTES; j++) {
                somme += classe[i].notes[j];
            }
         }    
            
             float moyenneGen = somme / (nbEtudiants * Max_NOTES);
 
          printf("Moyenne generale de la classe ------> %.2f\n", moyenneGen);


}
void afficherEtudiants() {
    if (nbEtudiants == 0) {
        printf("Aucun etudiant à afficher.\n");
        return;

      } 

      printf("\n _______Liste des etudiants_______ :\n");

 for (int i = 0; i <nbEtudiants ; i++) {
        printf("%s\n  %s\n  %s\n  ", classe[i].cne, classe[i].nom, classe[i].prenom);
        for (int j = 0; j < Max_NOTES;j++) 
             { printf("%.2f", classe[i].notes[j]);
            if (j <Max_NOTES-1){
             printf(", ");
            } 
            
        }
       
         printf(" Moyenne: %.2f\n", classe[i].moyenne);
      

        
    }


}    
void afficherBulletin(){

 char cne[20];
    printf("Entrez le CNE d etudiant :\n");
    scanf("%s", cne);

    int trouve = 0;
   for (int i = 0; i < nbEtudiants; i++) {
     if (strcmp(classe[i].cne, cne) == 0) {
            printf("_________Bulletin________\n");
            printf("CNE : %s\n", classe[i].cne);
            printf("Nom : %s\n", classe[i].nom);
            printf("Prenom : %s\n", classe[i].prenom);
            printf("Notes : "); 
           for (int j = 0; j < Max_NOTES ; j++) {
                printf("%.2f ", classe[i].notes[j]);
            }

            printf("Moyenne : %.2f\n", classe[i].moyenne);
            trouve = 1;
            break;

           

          }
        } 
        if (!trouve) {
    printf("Aucun Etudiant\n");
    }
 }

int main (){
int option; 

do {
printf("___________menu____________\n");
printf(YEL "1 -----> AjouterEtudiant.\n");
printf("2 -----> saisirNotes.\n");
printf("3 -----> calculerMoyenneEtudiant.\n");
printf("4 -----> calculerMoyenneGenerale.\n");
printf("5 -----> afficherEtudiants.\n");
printf("6 -----> afficherBulletin.\n");
printf("0 -----> Quitter.\n" RESET);
printf(" option: ");
scanf("%d", &option);

switch ( option){
    case 1 :
    ajouter();
    break;
    case 2 :
    saisirNotes();
    break;
    case 3 :
    calculerMoyenneEtudiant();
    break;
    case 4 :
    calculerMoyenneGenerale();
    break;
    case 5:
    afficherEtudiants();
    break;
    case 6:
    afficherBulletin();
    break;
    case 0 :
   printf("Youssef vous salue. Au revoir\n");
    break;
default:printf("Choix invalide\n");
    break;
}


} while (option !=0);
return 0; 




}
