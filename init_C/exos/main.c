#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,compt;
    printf("Saisissez une 1ere valeur entiere:");
    scanf("%i",&a);
    printf("Saisissez une 2e valeur entiere:");
    scanf("%i",&b);
    printf("Saisissez une 3e valeur entiere:");
    scanf("%i",&c);
    printf("Saisissez une 4e valeur entiere:");
    scanf("%i",&d);
    printf("Saisissez une 5e valeur entiere:");
    scanf("%i",&e);
    compt=0;
    if(a%2==0)compt=compt+1;
    if(b%2==0)compt=compt+1;
    if(c%2==0)compt=compt+1;
    if(d%2==0)compt=compt+1;
    if(e%2==0)compt=compt+1;
    printf("Le nombre de valeurs paires est:%i",compt);
    return 0;
}
