#include <stdio.h>

int main(){

int nb=0;
char chiffre;

do {
    printf("Entrez un nombre entier: \n");
    chiffre=getchar();
    nb=0;
    while (chiffre >='0' && chiffre <='9') {
        nb = (chiffre-48)+nb*10;
        chiffre = getchar();
    }
    if (chiffre!= '\n') while (getchar() !='\n');
}while ((chiffre<'0' || chiffre>'9') && chiffre != '\n');

if (chiffre == '\n') printf("L'entier est: %d \n",nb);12.312.3

return 0;

}
