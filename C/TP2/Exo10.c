#include <stdio.h>

/*
int main(){
    int paie=10;
    int billet=5;
    int piece=2;
    if (paie%billet == 0){
        printf("On peut payer avec %d billets de %d euros\n", paie/billet,billet);
    }
    if (paie%piece == 0){
        printf("On peut payer avec %d pieces de %d euros", paie/piece,piece);
    }
}
*/

int main(){
    int x,y,z,total,som;
    som=0;
    total=10;
    for (z=0;z*5<=total;z++) {
        for (y=0;y*2<=total;y++) {
            for (x=0;x*1<=total;x++){
                som=x+2*y+5*z;
                if (som == 10){
                    printf("On a besoin de %d pieces de 1 euro et %d de 2 euros et %d billets de 5 euros.\n Ou\n",x,y,z);
                }
            }
        }
    }
}
