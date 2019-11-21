#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Version Variables globales */
#define taille 20

/* Version qui affiche 2 valeurs

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
    int maxi=tab[i];
    for(i=1;i<taille;i++)
        if (maxi<tab[i]) {maxi=tab[i];};
    printf("Le maximum de ce tableau est %d\n", maxi);
}

void min(){
    int i=0;
    int mini=tab[i];
    for(i=1;i<taille;i++)
        if (mini>tab[i]) {mini=tab[i];};
    printf("Le minimum de ce tableau est %d\n", mini);
}

int main () {
    remplissage();
    affiche();
    max();
    min();
    return 0;
}
*/

/*Version qui retourne 2 valeurs*/

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

void minmax(int *mini,int *maxi){
    int i=0;
    *maxi=tab[i];
    *mini=tab[i];
    for(i=1;i<taille;i++) {
        if (*maxi<tab[i]) {*maxi=tab[i];};
        if (*mini>tab[i]) {*mini=tab[i];};
    }
}

int main () {
    int maxi;
    int mini;
    remplissage();
    affiche();
    minmax(&mini,&maxi);
    printf("le min est %d et le max est %d",mini,maxi);
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
