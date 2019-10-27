#include <stdio.h>
#include <math.h>

int main() {
    float nbre,i;
    while (nbre>=0) {
        printf("Entrez un nombre :");
        scanf("%f",&nbre);
        if (nbre!=floor(nbre) || nbre==0){
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
    }
    return 0;
}
