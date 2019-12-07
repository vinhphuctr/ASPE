#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Version Variables globales */
#define taille 20


int tab[taille];

void remplissage(){
    int i;
    srand(time(NULL));
    for(i=0;i<taille;i++)
        tab[i]=rand()%109 - 9;
}
void affiche(){
    int i;
    for(i=0;i<taille;i++)
        printf("tab[%d]=%d\n",i,tab[i]);
}
void inverse(){
    int i, cpt, stock;
    i=0;
    cpt=taille-1;
    while (i<cpt){
        stock=tab[i];
        tab[i]=tab[cpt];
        tab[cpt]=stock;
        i++;cpt--;
    }
}

void max(){
    int i=0;
    int max=tab[i];
    int max2=tab[i+1];
    int stock;
    for(i=2;i<taille;i++) {
        if (max>max2) {stock=max;max=max2;max2=stock;};
        if (max<tab[i]) {max=tab[i];};
    }
    printf("Les max de ce tableau sont %d puis %d\n", max2, max);
}


int main () {
    remplissage();
    affiche();
    max();
    return 0;
}


/* Version variable locale
#define taille 20


void remplissage(int tab[taille]){
    int i;
    srand(time(NULL));
    for(i=0;i<taille;i++)
        tab[i]=rand()%109 - 9;
}
void affiche(int tab[taille]){
    int i;
    for(i=0;i<taille;i++)
        printf("tab[%d]=%d\n",i,tab[i]);
}

int main () {
    int tab[taille];
    remplissage(tab);
    affiche(tab);
    return 0;
}
*/

/* Version taille tableau inconnue

void remplissage(int tab[], int taille){
    int i;
    srand(time(NULL));
    for(i=0;i<taille;i++)
        tab[i]=rand()%109 - 9;
}
void affiche(int tab[], int taille){
    int i;
    for(i=0;i<taille;i++)
        printf("tab[%d]=%d\n",i,tab[i]);
}

int main () {
    int tab[10];
    remplissage(tab,10);
    affiche(tab,10);
    return 0;
}
*/
