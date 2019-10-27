#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
int main()
{
    int nb,facto,i;
    printf("Entrez un nombre entier :\n");
    scanf("%d",&nb);
    if (nb == 0)
    {
        printf("La factorielle est 1");
        return 0;
    }
    i=1;
    facto=1;
    while (i<=nb)
    {
        facto *= i;
        i++;
    }
    printf("La factorielle est %d.\n",facto);
    return 0;
}
*/


int main()
{
    float nb,facto,i;
    printf("Entrez un nombre entier :\n");
    scanf("%f",&nb);
    if (nb!=floor(nb)){printf("Le format attendu n'est pas celui la.\n");}
    else {
        if (nb == 0)
        {
            printf("La factorielle est 1");
            return 0;
        }
        i=1;
        facto=1;
        while (i<=nb)
        {
            facto *= i;
            i++;
        }
        printf("La factorielle est %1.f.\n",facto);
    }
    return 0;
}
