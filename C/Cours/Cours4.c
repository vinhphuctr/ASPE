#include <stdio.h>

/*
int produit(int,int);
int puissance(int,int);

int main() {
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    printf("%d est le produit, %d est la puissance",produit(a,b), puissance(c,d));
}

int produit (int a,int b){
    return(a*b);
}
int puissance(int c, int d){
    if (d==0)
        return 1;
    return (c*puissance(c,d-1));
}
*/

int n=10;
void fonction ();
void fonction (int n)
{

    n++;
    printf("appel numero %d\n",n);
           return;
}
void main()
{
    int i;
    for(i=0;i<5;i++)
        fonction(i++);
}
