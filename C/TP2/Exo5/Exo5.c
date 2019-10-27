#include <stdio.h>
#include <stdlib.h>

int main()
{
    double note1,note2,note3,min,moy;
    printf("Entrez 3 notes :\n");
    scanf("%lf",&note1);
    scanf("%lf",&note2);
    scanf("%lf",&note3);
    min = note1;
    if (note2<min) {min=note2;}
    if (note3<min) {min=note3;}
    moy=(note1+note2+note3-min)/2;
    printf("La moyenne des deux meilleures notes est %f.\n",moy);
    return 0;
}
