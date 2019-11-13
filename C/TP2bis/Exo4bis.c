#include <stdio.h>
#include <stdlib.h>

void heures(int *heure, int *min, int *sec){
    (*sec)++;
    if (*sec>59){
            *sec = 0;
            (*min)++;
    }
    if (*min>59){
        *min=0;
        (*heure)++;
    }
    if (*heure>23){*heure=0;}
}

int main () {
    long int entree;
    int heure,min,sec;
    printf("Saisissez une heure sous la forme HHMMSS :\n");
    scanf("%ld",&entree);
    sec=entree%100;
    min=((entree-sec)/100)%100;
    heure=(((entree-sec)/100)-min)/100;
    heures(&heure,&min,&sec);
    printf("L'heure rentree majoree d'une seconde est %.2d%.2d%.2d.",heure,min,sec);
    return 0;
}
