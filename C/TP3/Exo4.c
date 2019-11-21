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
int max(){
    int i=0;
    int maxi=tab[i];
    for(i=1;i<taille;i++)
        if (maxi<tab[i]) {maxi=tab[i];};
    return maxi;
}

int main () {
    int maximum;
    remplissage();
    affiche();
    maximum=max();
    printf("Le maximum de ce tableau est %d\n", maximum);
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
