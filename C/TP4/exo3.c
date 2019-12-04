#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define M 10
#define N 10


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
    int tab[M][N];
    relationParite(tab);
    return 0;
}
