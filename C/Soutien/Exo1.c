#include <stdio.h>


/* int main (){
    int sortie=0;
    int vide=0;
    char n;
    int nb=0;
    do {
        vide=0;
        printf("Entrez un entier naturel: \n");
        n = getchar();
        if (n=='\n'){vide=1;}
        while (n<='9' && n>='0') {
           nb= (n-48)+nb*10;
           n=getchar();
        }
        if (n=='\n' && !vide) {
            printf("L'entier est %d. \n",nb);
            sortie=1;
        } else {
            printf("Erreur de saisie\n");
            nb=0;
            while(n!='\n'){n=getchar();}
        }
    } while (sortie == 0 || vide1);
    return 0;
}
*/

/*
int main() {
    int nb;
    printf("Entrez un nombre entier positif: \n");
    scanf("%d",&nb);
    for (int i=1;i<11;i++){printf("%d multiplie par %d = %d\n",nb,i,nb*i);}
    return 0;
}

int main() {
    int nb,i=1;
    printf("Entrez un nombre entier positif: \n");
    scanf("%d",&nb);
    while (i<11){printf("%d multiplie par %d = %d\n",nb,i,nb*i);i++;}
    return 0;
}
*/
# define G 9.80665
int main(){
    int t;
    float dis;
    printf("Entrez la hauteur de la grue:\n");
    scanf("%d",&t);
    printf("Entrez l'intervalle de temps entre chaque calcul:\n");
    scanf("%d",&dis);
    dis=0.5*G*t*t;
    printf("La distance est: %f\n",dis);
    return 0;
}











