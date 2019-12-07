#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    int choix,ent1,ent2,som;
    double reel1, reel2,somme;
    printf("Pour entrer 2 reels, tapez 1.\nPour rentrer 2 entiers, tapez 2.\n");
    scanf("%d",&choix);
    if (choix == 1) {
        printf("Entrez deux reels: \n");
        scanf("%lf",&reel1);
        scanf("%lf",&reel2);
        somme=(reel1+reel2);
        printf("La somme est %.2f\n",somme);
    }
    else if (choix == 2) {
        printf("Entrez deux entiers: \n");
        scanf("%d",&ent1);
        scanf("%d",&ent2);
        som=(ent1+ent2);
        printf("La somme est %d\n",som);
    }
    else
        printf("Mauvaise saisie\n");
    return 0;
}


int main ()
{
    float somR,b,c;
    int somInt;
    printf("Saisir deux nombres :\n");
    scanf("%f",&b);
    scanf("%f",&c);
    somR=b+c;
    if (b==floor(b) && c==floor(c)){
        somInt=floor(somR);
        printf("Voici la somme des deux entiers : %i",somInt);
    }
    else {
        printf("Voici la somme des deux reels : %f",somR);
    }
    return 0;
}

*/

int main()
{
    int n,i,fact;
    scanf("%d",&n);
    for(i=1,fact=1;i<=n;fact*=i,i++);
    printf("%d != %d",n,fact);
}
