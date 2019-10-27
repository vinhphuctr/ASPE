#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
int main()
{
    int nbre,i;
    printf("Entrez un nombre :");
    scanf("%d",&nbre);
    i=2;
    printf("%d multiplie par 1 = %d \n",nbre,nbre);
    while (i<=10)
    {
        printf("%d multiplie par %d = %d \n",nbre,i,i*nbre);
        i++;
    }
    return 0;
}
*/

int main()
{
    float nbre,i;
    printf("Entrez un nombre :");
    scanf("%f",&nbre);
    if (nbre!=floor(nbre) || nbre<1){
        printf("La valeur saisie n'est pas conforme");
    }
    else {
        i=2;
        printf("%1.f multiplie par 1 = %1.f \n",nbre,nbre);
        while (i<=10)
        {
            printf("%1.f multiplie par %1.f = %1.f \n",nbre,i,i*nbre);
            i++;
        }
    }
    return 0;
}
