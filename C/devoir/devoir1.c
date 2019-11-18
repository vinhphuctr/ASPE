#include <stdio.h>
#include <math.h>

int main() {
    int i, nb, compter, test;
    char n;
    printf("Entrez un nombre entier :");
    scanf("%c",&n);
    int verif=0;
    while (n<'0' || n>'9'){
        scanf("%c",&n);
        if (n>'0' || n<'9'){
            verif=verif + (n-48)*10;
        }
    }
    nb=2;
    compter=0;
    test=1;
    float limite;
    while (compter<verif){
        limite=sqrt(nb)+1;
        if (nb%2==0)
            test=0;
        else {
            for(i=3;i<limite &&!test;i+=2,compter++)
                if (nb%i==0)
                test=0;
        }

    if(test){
        compter++;
        printf("Nombre premier numero %d = %d\n",compter,nb);
    }
    test=1;
    nb++;
    }
    return 0;
}
