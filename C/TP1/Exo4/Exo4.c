#include <stdio.h>

int main()
{
    int rayon=10;
    double diametre, circonf, aire;
    diametre = 2*rayon;
    circonf= 2*3.14*rayon;
    aire=pow(rayon,2)*3.14;
    printf("Pour un rayon de %d , le diametre est %.2f, la circonference est %.2f et l'aire est %.2f\n", rayon, diametre, circonf, aire);
    return 0;
}
