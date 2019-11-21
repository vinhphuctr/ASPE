#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Version Variables globales
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

int main () {
    remplissage();
    affiche();
    return 0;
}
*/

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

/* Version taille tableau inconnue*/

void remplissage(int tab[], int taille){
    int i;
    srand(time(NULL));
    for(i=0;i<taille;i++)
        tab[i]=rand()%109 - 9;
}
void affiche(int tab[], int taille){
    int i;
    for(i=0;i<taille;taille--)
        printf("tab[%d]=%d\n",taille,tab[taille]);
}

int main () {
    int tab[10];
    remplissage(tab,10);
    affiche(tab,10);
    return 0;
}
