#include <stdio.h>

int equa(float a,float b,float c) {
    int nbsol;
    float delta;
    printf("Entrez les coefficients de l'equation du second degre:\n");
    scanf("%f%f%f",&a,&b,&c);
    delta = b*b-4*a*c;
    if (delta<0) return 0;
    else {
        if (delta == 0) { return 1;}
        else {
            if (delta >0) { return 2;}
        }
    }
}

int main () {
    int j,k,l;
    int res;
    res=equa(j,k,l);
    printf("L'equation possede %d solutions\n",res);
    return 0;
}
