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

void tri(){
    int i=1;
    int j;
    int petit;
    while (i<=(taille-1)) {
        petit=tab[i];
        j=i-1;
        while (j>=0 && petit<tab[j]) {
            tab[j+1]=tab[j];
            j=j-1;
        }
        tab[j+1]=petit;
        i++;
    }

}

void max2(){
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

void min(){
    int i=0;
    int mini=tab[i];
    for(i=1;i<taille;i++)
        if (mini>tab[i]) {mini=tab[i];};
    printf("Le minimum de ce tableau est %d\n", mini);
}

void max(){
    int i=0;
    int maxi=tab[i];
    for(i=1;i<taille;i++)
        if (maxi<tab[i]) {maxi=tab[i];};
    printf("Le maximum de ce tableau est %d\n", maxi);
}

int main () {
    remplissage();
    affiche();
    tri();
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

/* Version taille tableau inconnue */


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

void inverse(int tab[], int taille){
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

void tri(int tab[], int taille){
    int i=1;
    int j;
    int petit;
    while (i<=(taille-1)) {
        petit=tab[i];
        j=i-1;
        while (j>=0 && petit<tab[j]) {
            tab[j+1]=tab[j];
            j=j-1;
        }
        tab[j+1]=petit;
        i++;
    }

}

void max2(int tab[], int taille){
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

void min(int tab[], int taille){
    int i=0;
    int mini=tab[i];
    for(i=1;i<taille;i++)
        if (mini>tab[i]) {mini=tab[i];};
    printf("Le minimum de ce tableau est %d\n", mini);
}

void max(int tab[], int taille){
    int i=0;
    int maxi=tab[i];
    for(i=1;i<taille;i++)
        if (maxi<tab[i]) {maxi=tab[i];};
    printf("Le maximum de ce tableau est %d\n", maxi);
}

int main () {
    int taille,choix;
    printf("Quelle est la taille du tableau que vous souhaitez manipuler ? \n");
    scanf("%d",&taille);
    int tab[taille];
    printf("Que souhaitez vous faire ?\n");
    printf("Pour afficher le tableau tapez 1\nPour inverser le tableau tapez 2\n");
    printf("Pour trier le tableau tapez 3\nPour afficher le minimum du tableau tapez 4\n");
    printf("Pour afficher le maximum du tableau tapez 5\nPour afficher les deux maximum du tableau tapez 6\n");
    scanf("%d",&choix);
    remplissage(tab,taille);
    switch(choix) {
        case 1: affiche(tab,taille);
        break;
        case 2: inverse(tab,taille); affiche(tab,taille);
        break;
        case 3: tri(tab,taille); affiche(tab,taille);
        break;
        case 4: min(tab,taille);
        break;
        case 5:  max(tab,taille);
        break;
        case 6: max2(tab,taille);
    }
    return 0;
}

