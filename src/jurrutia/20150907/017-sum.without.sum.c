#include <stdio.h>
#include <stdlib.h>

#include "../utils.h"

int plus(int s, int i);
int sumNNaturals(int n);
int sumNNaturalsIterative(int n);
int sumNNaturalsIterativeReduce(int n);

int main(int argc, char *argv[])
{
    int n = getOrReadInteger(argc, argv);

    printf("Recursive: %d\n", sumNNaturals(n));
    printf("Iterative: %d\n", sumNNaturalsIterative(n));
    printf("Iterative: %d\n", sumNNaturalsIterativeReduce(n));
}

int plus(int s, int i)
{
    return s + i;
}

int sumNNaturals(int n)
{
    return n > 0 ? plus(n, sumNNaturals(n-1)) : n;
}

int sumNNaturalsIterative(int n)
{
    int sum = 0;
    for (int k = 1; k <= n; k = plus(k, 1)) {
        sum = plus(sum, k);
    }

    return sum;
}

int sumNNaturalsIterativeReduce(int n)
{
    int sum = 0;
    for (int k = n; k > 0; sum = plus(sum, k), k = plus(k, -1));
    return sum;
}
