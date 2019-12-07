#include <stdio.h>

void remplirDiv(int A[], int R[], int i, int nb_colonnes){
    // Juste pour vérifier que le parcours de A est correct
    if (i%nb_colonnes==0) printf("\n");
    printf("A[%d] div A[%d] \t", i/nb_colonnes,i%nb_colonnes);

    // Remplissage d'un element de R: un element de A divise un autre element de A
    if (A[i%nb_colonnes]%A[i/nb_colonnes]==0) R[i/nb_colonnes * nb_colonnes +i%nb_colonnes]=1;
    else R[i/nb_colonnes * nb_colonnes +i%nb_colonnes]=0;
}

void afficherR(int R[], int i, int nb_colonnes){

    // R est une matrice carré. Penser à réutiliser la même liste de paramètres pour le reste des exercices

   if (i%nb_colonnes==0) printf("\n");
   printf("%d \t ",R[i/nb_colonnes * nb_colonnes +i%nb_colonnes]);

}

int main(){
     // Version généralisée des Exercices 2 et 3

     int nb_lig, nb_col;
     printf("Saisir la taille des 2 dimensions:\n");
     scanf("%d %d", &nb_lig, & nb_col);

     int R[nb_lig][nb_col];
     int A[nb_lig];
     int i;

     printf("Saisir les valeurs de votre tableau A:\n");
     for (i = 0; i < nb_lig; i++)
       scanf("%d",&A[i]);

     // Remplissage de la matrice R représentant la relation x divise y
     for (i = 0; i < (nb_lig * nb_col); i++)
       remplirDiv(A, R[0], i, nb_col);

     printf("Voici la matrice R:\n");
     for (i = 0; i < ( nb_lig* nb_col); i++)
       afficherR(R[0], i, nb_col);

return 0;


}
