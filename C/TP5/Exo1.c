#include <stdio.h>

main () {
    char *a;
    printf("%d\n", sizeof(*a));
    int *b;
    printf("%d\n", sizeof(*b));
    double *c;
    printf("%d\n", sizeof(*c));
    return 0;
}
