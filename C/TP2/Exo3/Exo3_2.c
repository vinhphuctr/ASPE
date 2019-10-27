#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vn,som2;
    int n,un,som1;
    n=0;
    som1,som2=0,0;
    while (n<10)
    {
        un = 3*n+5;
        vn=((3.*n*n+5)/(n*n*n+1));
        som1+=un;
        som2+=vn;
        printf("Pour n = %d, un vaut %d et vn vaut %.2f\n",n,un,vn);
        n++;
    }
    printf("La somme des 10 premiers termes de un vaut %d et celle de vn vaut %.2f",som1,som2);
    return 0;
}
