#include <stdio.h>


float factor(float nb)
{
    float facto,i;
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
    }
    return(facto);
}

int main () {
    float a,factorielle;
    factorielle=factor(a);
    printf("La factorielle est %1.f.\n",factorielle);
    return 0;
}
