/*************************************/
/* Donne surface et perimetre        */
/* Auteur: Bassargette Sophie        */
/* Date 11/09/19                     */
/* Teste par: Personne               */
/*************************************/


#include <stdio.h>

int main()
{
    int a,b,c; // Déclaration des variables
    printf("Entrez a:");
    scanf("%i", &a);
    printf("Entrez b:");
    scanf("%i", &b);
    b=a+b;
    a=b-a;
    b=b-a;

    /* Sinon on pourrait mettre
    c=a;
    a=b;
    b=c;
    */

    printf("Voici a %i puis b %i une fois intervertis", a , b);
    return 0;
}
