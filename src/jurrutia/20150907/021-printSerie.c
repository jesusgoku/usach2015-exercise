#include <stdio.h>

#include "../utils.h"

void printSerie(int n);
void printSerieEven(int n);

int main (int argc, char *argv[])
{
    int n = getOrReadInteger(argc, argv);
    printSerie(n);
    printSerieEven(n);

    return 0;
}

void printSerie(int n)
{
    for (int k = 0, j = 1; k < n; ++k) { 
        printf("%d, ", j);
        j += (0 == k % 2) ? 4 : -2;
    }
    printf("\n");
}

void printSerieEven(int n)
{
    for (int k = 1; k <= n; ++k) { 
        printf("%d, ", (0 == k % 2) ? k + 3 : k);
    }
    printf("\n");
}
