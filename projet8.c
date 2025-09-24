#include <stdio.h>

int main() {
    double montant_pret, taux_annuel, paiement_mensuel;
    double taux_mensuel, solde;

    // Entrée des données
    printf("Entrez le montant du prêt : ");
    scanf("%lf", &montant_pret);

    printf("Entrez le taux d'intérêt : ");
    scanf("%lf", &taux_annuel);

    printf("Entrez le paiement mensuel : ");
    scanf("%lf", &paiement_mensuel);

    // Conversion du taux annuel en taux mensuel
    taux_mensuel = (taux_annuel / 100.0) / 12.0;

    // Calcul du solde après chaque paiement
    solde = montant_pret;

    // Paiement 1
    solde = (solde - paiement_mensuel) + (solde * taux_mensuel);
    printf("Solde restant après le premier paiement : $%.2f\n", solde);

    // Paiement 2
    solde = (solde - paiement_mensuel) + (solde * taux_mensuel);
    printf("Solde restant après le deuxième paiement : $%.2f\n", solde);

    // Paiement 3
    solde = (solde - paiement_mensuel) + (solde * taux_mensuel);
    printf("Solde restant après le troisième paiement : $%.2f\n", solde);

    return 0;
}
