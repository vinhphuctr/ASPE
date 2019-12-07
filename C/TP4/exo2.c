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


int main() {
    int tab[M][N];
    relationDiv(tab);
    return 0;
}
