/* ROMAIN MONIER */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void afficherMatrice(int taille_x, int taille_y, int matrice_2d[taille_x][taille_y])
{
    int i, j;

    for(i = 0 ; i < taille_x ; i++)
    {
        for(j = 0 ; j < taille_y ; j++)
        {
            printf(" %d ;", matrice_2d[i][j]);
        }
        printf("\n");
    }
}

void remplirMatrice(int taille_x, int taille_y, int matrice_2d[taille_x][taille_y])
{
    int i, j;

    srand(time(0));

    for(i = 0 ; i < taille_x ; i++)
    {
        for(j = 0 ; j < taille_y ; j++)
        {
            matrice_2d[i][j] = rand();
        }
    }
}

int main(int argc, char argv[])
{
    int nb_lig, nb_col;

    printf("Saisir la taille des 2 dimensions:\n");
    scanf("%d %d", &nb_lig, & nb_col);

    int matrice_2d[nb_lig][nb_col];

    remplirMatrice(nb_col, nb_lig, matrice_2d);

    afficherMatrice(nb_col, nb_lig, matrice_2d);

    return 0;
}
