#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*
void bis(float annee) {
    printf("Entrez une annee comprise entre 1512 et 3999\n");
    scanf("%f",&annee);
    if ((annee<1512 || annee>3999) || annee!=floor(annee)) {
            printf("Mauvaise valeur saisie\n");
    }
    else if (((int)annee%4 == 0) && ((int)annee%100 != 0))
    {
        printf("L'annee saisie est bissextile");
    }
    else if ((int)annee%400 == 0)
    {
        printf("L'annee saisie est bissextile");
    }
    else
    {
        printf("Ce n'est pas une annee bissextile");
    }
}
*/
bool bis(float annee) {

    printf("Entrez une annee comprise entre 1512 et 3999\n");
    scanf("%f",&annee);
    if ((annee<1512 || annee>3999) || annee!=floor(annee)) {
            while (annee<1512 || annee>3999) {
                scanf("%f",&annee);
            }
    }
    else if (((int)annee%4 == 0) && ((int)annee%100 != 0))
    {
        return (true);
    }
    else if ((int)annee%400 == 0)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}

int main () {
    float an;
    bool bi;
    bi = bis(an);
    if (bi==true) {printf("L'annee saisie est bissextile");
    } else {
        printf("Ce n'est pas une annee bissextile");
    }
    return 0;
}
