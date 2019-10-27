#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
int main()
{
    int annee;
    printf("Entrez une annee comprise entre 1512 et 3999\n");
    scanf("%d",&annee);
    if ((annee%4 == 0) && (annee%100 != 0))
    {
        printf("L'annee saise est bisextile");
    }
    else if (annee%400 == 0)
    {
        printf("L'annee saise est bisextile");
    }
    else
    {
        printf("Ce n'est pas une annee bisextile");
    }
    return 0;
}
*/

int main()

{
    float annee;
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

    return 0;
}

