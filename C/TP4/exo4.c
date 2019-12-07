#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define M 10
#define N 10


void relationDiv(int tab[N][M]) {
    int i,j;
    for(i=1;i<N;i++){
        for(j=1;j<M;j++){
            if ((i%j)==0) {
                tab[i][j]=1;
                printf("tab[%d][%d] = %d\n", i, j, tab[i][j]);
            } else {
                tab[i][j]=0;
                printf("tab[%d][%d] = %d\n", i, j, tab[i][j]);
            }
        }
    }
}

void relationParite(int tab[N][M]) {
    int i,j;
    for(i=1;i<N;i++){
        for(j=1;j<M;j++){
            if (((i%2)==0 && (j%2)==0) || ((i%2)==1 && (j%2)==1)) {
                tab[i][j]=1;
                printf("tab[%d][%d] = %d\n", i, j, tab[i][j]);
            } else {
                tab[i][j]=0;
                printf("tab[%d][%d] = %d\n", i, j, tab[i][j]);
            }
        }
    }
}

int main() {
    /*
    int tab[A]={1,2,4,5,6,8,10,12,30,35};
    relationParite(tab);
    */

    int nb_lig, nb_col;
     printf("Saisir la taille des 2 dimensions:\n");
     scanf("%d %d", &nb_lig, & nb_col);

     int test[nb_lig][nb_col];
     int i,j;
     printf("Saisir les valeurs de votre tableau A:\n");
     for (i = 0; i < nb_lig; i++) {
        scanf("%d",&test[i][0]);
        j=i;
        test[0][j]=test[i][0];
     }

    relationParite(test);

    return 0;
}
