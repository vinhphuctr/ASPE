#include <stdio.h>

int main()
{
    int A, B, c;
    printf("Entre deux entiers respectivement A et B :\n");
    scanf("%d%d",&A,&B);
    c=A;
    A=B;
    B=c;
    printf("A est devenu : %d\n", A);
    printf("B est devenu : %d", B);
    return 0;
}
