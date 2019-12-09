#include <stdio.h>

void echangeTout(void *a,void *b, int x){
    printf("%d,%d\n",a,b);
    switch (x)
    {
        case 1:
            {
            int(*a);
            int(*b);
            int c;
            c=*a;
            *a=*b;
            *b=c;
            }
            break;
    }
    printf("%d,%d\n",a,b);
}

main () {
    int nb1=3;
    int nb2=4;
    int type=1;
//    scanf("%d%d",&nb1,&nb2);
    printf("adresses de nb1 et nb2: %d et %d\n", &nb1,&nb2);
    echangeTout(&nb1,&nb2,type);
    printf("Nb1 vaut %d et Nb2 vaut %d\n", nb1,nb2);
    printf("adresses de nb1 et nb2: %d et %d\n", &nb1,&nb2);
    return 0;
}


