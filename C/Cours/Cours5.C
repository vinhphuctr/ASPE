#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
#define N 5

void remplir(int tab[N][M]) {
    int i,j;
    for(i=0;i<N;i++) {
        for (j=0;j<M;j++) {
            tab[i][j]=(rand()%109-9);
        }
    }
}

void afficher(int tab[N][M]) {
    int i,j;
    for(i=0;i<N;i++) {
        for (j=0;j<M;j++) {
            printf("Tab[%d][%d]=%d\n", i,j,tab[i][j]);
        }
    }
}

int main() {
    int tab[N][M];
    printf("Saisir les valeurs de votre matrice dans le code (define M et N) \n");
    remplir(tab);
    afficher(tab);
    return 0;
}
