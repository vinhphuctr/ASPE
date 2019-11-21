#include <stdio.h>

int main(){

int nb=0;
char chiffre;

printf("Entrez un nombre entier: \n");

chiffre=getchar();
while (chiffre >='0' && chiffre <='9') {
    nb = (chiffre-48)+nb*10;
    chiffre = getchar();
}

if (chiffre == '\n') printf("L'entier est: %d \n",nb);
else printf("Erreur de saisie");

return 0;

}
