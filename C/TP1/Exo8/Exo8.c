#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date,jour,mois,an;
    printf("Entrez un nombre pour une date tel que une date JJMMAA :\n");
    scanf("%d",&date);
    an=date%100;
    mois=((date-an)/100)%100;
    jour=(((date-an)/100)-mois)/100;
    printf("La date est : %.2d-%.2d-20%d",jour,mois,an);
    return 0;
}
