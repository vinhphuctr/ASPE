#include <stdio.h>
#include <math.h>

int main()
{
    double R, diametre;
    double circonf, aire;
    printf("Entrez le rayon du cercle :\n");
    scanf("%lf",&R);
    diametre = 2*R;
    circonf= 2*M_PI*R;
    aire=pow(R,2)*M_PI;
    printf("Pour un rayon de %.2f , le diametre est %.2f, la circonference est %.2f et l'aire est %.2f\n", R, diametre, circonf, aire);
    return 0;
}
