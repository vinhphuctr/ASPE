#include <stdio.h>
#include <stdlib.h>


int main()
{
    float vn;
    int un,n;
    n=0;
    while (n<10)
    {
        un=3*n+5;
        vn=(3.*n*n+5)/(n*n*n+1);
        printf("Pour n = %d, un vaut %d et vn vaut %f\n",n,un,vn);
        n++;
    }
    return 0;
}
