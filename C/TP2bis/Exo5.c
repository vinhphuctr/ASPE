#include <stdio.h>

void lettre(char c){
    char chiffre='1';
    printf("Entrez un chiffre: \n");
    while (chiffre!='#') {
        scanf("%c",&chiffre);
        if (chiffre == '1'){printf("Un\n");}
        if (chiffre == '2'){printf("Deux\n");}
        if (chiffre == '3'){printf("Trois\n");}
        if (chiffre == '4'){printf("Quatre\n");}
        if (chiffre == '5'){printf("Cinq\n");}
        if (chiffre == '6'){printf("Six\n");}
        if (chiffre == '7'){printf("Sept\n");}
        if (chiffre == '8'){printf("Huit\n");}
        if (chiffre == '9'){printf("Neuf\n");}
        if (chiffre == '0'){printf("Zero\n");}
    }
}

int main () {
    char d;
    lettre(d);
    return 0;
}
