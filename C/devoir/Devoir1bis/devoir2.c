#include <stdio.h>


/* Fonctionne pour les chiffres mais pas à partir de deux nombres
int main(){
    char a,b,op,sol;
    printf("Entrez une operation:\n");
    a=getchar();
    op=getchar();
    b=getchar();
    a=a-48;
    int(cast(a));
    b=b-48;
    int(cast(b));

    printf("%d %c %d\n",a,op,b);

    if (op == '+') {
        sol=a+b;
    } else if (op == '-') {
        sol=a-b;
    } else if (op == '*') {
        sol=a*b;
    } else if (op == '/') {
        sol=a/b;
    } else if (op == '%') {
        sol=a%b;
    }

    printf("La solution est %d\n",sol);

    return 0;
}
*/
int main(){
    char a,b,op,sol;
    printf("Entrez une operation:\n");

    a=getchar();

    while (a>='0' && a<='9'){
        a=(a-48)+a*10;
    }
    while (a>='9' || a<='0'){
        op=a;
    }
    while (a>='0' && a<='9'){
        b=(a-48)+a*10;
    }

    int(cast(a));
    int(cast(b));

    printf("%d %c %d\n",a,op,b);

    if (op == '+') {
        sol=a+b;
    } else if (op == '-') {
        sol=a-b;
    } else if (op == '*') {
        sol=a*b;
    } else if (op == '/') {
        sol=a/b;
    } else if (op == '%') {
        sol=a%b;
    }

    printf("La solution est %d\n",sol);

    return 0;
}
