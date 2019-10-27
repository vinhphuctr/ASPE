#include <stdio.h>


int main()
{
    unsigned long long int x=10864;
    unsigned long long int y=18817;
    unsigned long long int nb1=9*x*x*x*x;
    unsigned long long int nb2=y*y*y*y;
    unsigned long long int nb3=2*y*y;
    unsigned long long int resultat=nb1-nb2+nb3;
    printf("Le resultat est : %llu", resultat);
    return 0;
}

/* Le résultat est 1
Avec int le resultat est le meme mais les valeurs intermediaires sont moins precises.


int main()
{
    double x=10864;
    double y=18817;
    double nb1=9*x*x*x*x;
    double nb2=y*y*y*y;
    double nb3=2*y*y;
    double resultat=nb1-nb2+nb3;
    printf("Le resultat est : %f", resultat);
    return 0;
}*/

/*Le résultat est 2  */
