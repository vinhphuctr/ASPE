#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    scanf("%i",&d);
    scanf("%i",&e);
    f=a;
    if(b>f)f=b;
    if(c>f)f=c;
    if(d>f)f=d;
    if(e>f)f=e;
    printf("le plus grand est %i : ", f);
    return 0;
}
