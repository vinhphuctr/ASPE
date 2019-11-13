#include <stdio.h>

void date(int nombre) {
    int jj,mm,aa;
    printf("Entrez une date au format JJMMAA:");
    scanf("%d",&nombre);
    aa=nombre%100;
    mm=((nombre-aa)/100)%100;
    jj=(((nombre-aa)/100)-mm)/100;
    if (mm == 1) printf("La date est %d Janvier 20%d\n",jj,aa);
    if (mm == 2) printf("La date est %d Fevrier 20%d\n",jj,aa);
    if (mm == 3) printf("La date est %d Mars 20%d\n",jj,aa);
    if (mm == 4) printf("La date est %d Avril 20%d\n",jj,aa);
    if (mm == 5) printf("La date est %d Mai 20%d\n",jj,aa);
    if (mm == 6) printf("La date est %d Juin 20%d\n",jj,aa);
    if (mm == 7) printf("La date est %d Juillet 20%d\n",jj,aa);
    if (mm == 8) printf("La date est %d Aout 20%d\n",jj,aa);
    if (mm == 9) printf("La date est %d Septembre 20%d\n",jj,aa);
    if (mm == 10) printf("La date est %d Octobre 20%d\n",jj,aa);
    if (mm == 11) printf("La date est %d Novembre 20%d\n",jj,aa);
    if (mm == 12) printf("La date est %d Decembre 20%d\n",jj,aa);
}

int main () {
    int nombrepourdate;
    date(nombrepourdate);
    return 0;
}
