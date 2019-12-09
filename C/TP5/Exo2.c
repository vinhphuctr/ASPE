#include <stdio.h>

main () {
    int Nb1=0;
    int *Pt1=&Nb1;
    printf("%d, %d, %d, %d, %d, %d\n", Nb1,Pt1,(Pt1+1),(*Pt1),(*Pt1+1), *(Pt1+1));
    double Nb2=12;
    double *Pt2=&Nb2;
    printf("%f, %d, %d, %f, %f, %d\n", Nb2,Pt2,(Pt2+1),(*Pt2),(*Pt2+1), *(Pt2+1));
    return 0;
}
