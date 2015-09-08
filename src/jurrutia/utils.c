#include <stdio.h>
#include <stdlib.h>

int getOrReadInteger(int argc, char *argv[])
{
    int n = 0;

    if (2 <= argc) {
        n = atoi(argv[1]);
    } else {
        printf("Ingresa un natural: ");
        scanf("%d", &n);
    }

    return n;
}