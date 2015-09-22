#include <stdio.h>

#include "utils.h"

void printFactorialTerms(int n);

int main(int argc, char * argv[])
{
    int n = getOrReadInteger(argc, argv);
    printFactorialTerms(n);
    return 0;
}

void printFactorialTerms(int n)
{
    for (int k = 1; k <= n; ++k) {
        for (int j = 1; j < k; ++j) {
            printf ("%d * ", j);
        }
        printf("%d\n", k);
    }
}
