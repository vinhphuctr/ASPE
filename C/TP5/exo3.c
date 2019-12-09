#include <stdio.h>

void echange(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

main () {
    int nb1,nb2;
    scanf("%d%d",&nb1,&nb2);
    echange(&nb1,&nb2);
    printf("Nb1 vaut %d et Nb2 vaut %d\n", nb1,nb2);
    return 0;
}

