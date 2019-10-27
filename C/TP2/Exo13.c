#include <stdio.h>

int main() {
    char c;
    int cpt=0;
    printf("Entrez un texte (avec des L de preferences sinon il ne se passera rien): \n");
    scanf("%c",&c);
    while (c!='\n'){
        if (c == 'L') cpt++;
        if (c!=' ') {
            if (c>64 && c<91) {
                c=c+32;
            }
            else if (c>96 && c<123) {
                c=c-32;
            }
            printf("%c",c);
        }
        scanf("%c",&c);
    }
    printf("\nIl y a %d 'L' dans le texte",cpt);
}
