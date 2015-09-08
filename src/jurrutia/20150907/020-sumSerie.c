#include <stdio.h>

#include "../utils.h"

float sumSerie(int n);

int main (int argc, char *argv[])
{
    int n = getOrReadInteger(argc, argv);

    printf("%.2f\n", sumSerie(n));

    return 0;
}

float sumSerie(int n)
{
    float sum = 0;
    for (int k = 1, j = 1; k <= n; ++k, j += 3) {
        sum += (1.0 / j);
    }

    return sum;
}
