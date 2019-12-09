#include <stdio.h>

main() {
    char c,d;

    while (c!= '\n'){
        c=getchar();
        printf("%c",c);
    }

    while (d!= '\n'){
        d=getchar();
        printf("%c",d);
    }

    return 0;
}
