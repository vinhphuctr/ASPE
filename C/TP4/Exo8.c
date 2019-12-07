#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define M 4
#define N 4


void remplir(int tab[N][M]) {
    int i,j;
    for(i=0;i<N;i++) {
        for (j=0;j<M;j++) {
            tab[i][j]=1;
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

bool estAntiSymetrique(int matrice[N][M], int nbCol, int nbLigne){
  int i,j;
  bool res=true;
  for (i=0;i<nbCol;i++) {
    for (j=0;j<nbLigne; j++) {
        if (matrice[i][j] == matrice[j][i] && i!=j) {
            return false;
        }
    }
  }
  return res;
}

int main(){
    int matrice[N][M]={{1,0,0,0},{0,1,1,0},{1,0,1,0},{1,0,1,1}};
    afficher(matrice);
    if (estAntiSymetrique(matrice,4,4)) { printf("Elle est AntiSymetrique.");};
    if (!estAntiSymetrique(matrice,4,4)) { printf("Elle n'est pas AntiSymetrique.");};
    return 0;
}
