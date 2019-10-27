/*************************************/
/* Donne surface et perimetre        */
/* Auteur: Bassargette Sophie        */
/* Date 11/09/19                     */
/* Teste par: Personne               */
/*************************************/


#include <stdio.h>

int main()
{
    double prix, kg, tva, prixttc, prixht; // Déclaration des variables
    printf("Entrez le prix du kg:");
    scanf("%lf", &prix);
    printf("Entrez le nombre de kg:");
    scanf("%lf", &kg);
    prixht = prix*kg;
    tva= prixht*0.2;
    prixttc = prixht+tva;
    printf("le prix est %1.2lf ht et %1.2lf ttc", prixht , prixttc);
    return 0;
}
