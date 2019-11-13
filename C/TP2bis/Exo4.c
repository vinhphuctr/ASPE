#include <stdio.h>
#include <stdlib.h>

void heure(long int entree){
    int sec,min,heure;
    printf("Saisissez une heure sous la forme HHMMSS :\n");
    scanf("%ld",&entree);
    sec=entree%100;
    min=((entree-sec)/100)%100;
    heure=(((entree-sec)/100)-min)/100;
    sec+=1;
    if (sec>59){
            sec = 0;
            min+=1;
    }
    if (min>59){
        min=0;
        heure+=1;
    }
    if (heure>23){heure=0;}
    printf("L'heure rentree majoree d'une seconde est %.2d%.2d%.2d.",heure,min,sec);
}

int main () {
    long int a;
    heure(a);
    return 0;
}
