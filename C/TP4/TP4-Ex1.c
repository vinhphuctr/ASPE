
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 // Remplir et afficher un tableau d'entiers à 2 dimensions de taille quelconque

 void remplirTab2(int tab[], int i, int nb_colonnes){
tab[i/nb_colonnes * nb_colonnes +i%nb_colonnes]= rand()%109 -9;
printf("i =%d: %d\n",i,(i/nb_colonnes * nb_colonnes +i%nb_colonnes) );
 }

void afficherTab2(int tab[], int i, int nb_colonnes){

 if (i%nb_colonnes==0) printf("\n");
 printf("%d \t ",tab[i/nb_colonnes * nb_colonnes +i%nb_colonnes]);

}

 int main(){
     int nb_lig, nb_col;

     // Allocation de l'espace mémoire pour la tableau se fera au moment de l'exécution
     printf("Saisir la taille des 2 dimensions:\n");
     scanf("%d %d", &nb_lig, & nb_col);

     int tab[nb_lig][nb_col];
     int i;

     srand(time(NULL));
     for (i = 0; i < (nb_lig * nb_col); i++)
     remplirTab2(tab[0], i, nb_col);

     printf("Voici le tableau rempli:\n");

     for (i = 0; i < ( nb_lig* nb_col); i++)
     afficherTab2(tab[0], i, nb_col);

     return 0;
       }
