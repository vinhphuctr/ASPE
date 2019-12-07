#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define M 5
#define N 5

void remplir(int tab[N][M]) {
    int i,j;
    for(i=0;i<N;i++) {
        for (j=0;j<M;j++) {
            tab[i][j]=2;
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

bool estBooleenne(int matrice[N][M], int nbCol, int nbLigne){
  int i,j;
  bool res=true;
  for (i=0;i<nbCol;i++) {
    for (j=0;j<nbLigne; j++) {
        if (matrice[i][j] != 0 && matrice[i][j] != 1) {
            return false;
        }
    }
  }
  return res;
}

int main(){
    int matrice[N][M];
    remplir(matrice);
    afficher(matrice);
    if (estBooleenne(matrice,5,5)) { printf("Elle est booleenne.");};
    if (!estBooleenne(matrice,5,5)) { printf("Elle n'est pas booleenne.");};
    return 0;
}
