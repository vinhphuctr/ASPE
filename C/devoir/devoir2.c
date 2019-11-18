#include <stdio.h>
#include <math.h>


int prejum (int m){
    int i, nb, compter, test;
    nb=2;
    compter=0;
    test=1;
    float limite;
    while (compter<m){
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
    }
    test=1;
    nb++;
    }
    return nb;
}


int main() {
    int n,i;
    int a,b;
    printf("Entrez un nombre entier :");
    scanf("%d",&n);
    i=1;
    while (i<n0){
        a=prejum(i);
        b=prejum(i+1);
        if ((b-a)<3 && (b*b)<n) { printf("Les nombres %d et %d sont jumeaux\n",a,b);}
        i=i+1;
    }
    return 0;
}
