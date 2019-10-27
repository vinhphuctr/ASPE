#include <stdio.h>

int main()
{
    int longu, larg;
    printf("Entrez une longueur et une largeur de rectangle:\n");
    scanf("%d %d",&longu,&larg);
    printf("Le perimetre est %d et la surface est %d.", longu*2+larg*2,longu*larg);
    return 0;
}
