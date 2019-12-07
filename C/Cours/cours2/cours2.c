#include<stdio.h>

int main()
{
    int i=23674;
    double x=1e-8 + 1000;
    char c = 'A';
    printf("impression de i:\n");
    printf("%d \t %u \t %o \t %x",i,i,i,i);
    printf("\n%f \t %e \t %g",x,x,x);
    printf("\n%.2f \t%.2e",x,x);
    printf("\n%.20f\t%.20e",x,x);
    printf("\nimpression de c:\n");
    printf("%c\t%d",c,c);
    return 0;
}
