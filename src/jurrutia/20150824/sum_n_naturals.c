#include <stdio.h>

int sumNNaturals(int n);
int sumNNaturalsIterative(int n);
int sumNNaturalsRecursive(int n);

int main()
{
    int n;
    printf("Ingrese un numero natural: ");
    scanf("%d", &n);
    printf("La suma de los primeros %d naturales es: %d\n", n, sumNNaturals(n));
    printf("La suma (iterativa) de los primeros %d naturales es: %d\n", n, sumNNaturalsIterative(n));
    printf("La suma (recursiva) de los primeros %d naturales es: %d\n", n, sumNNaturalsRecursive(n));
    return 0;
}

int sumNNaturalsIterative(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int sumNNaturals(int n)
{
    return n * (n + 1) / 2;
}

int sumNNaturalsRecursive(int n)
{
    return 1 == n ? n : n + sumNNaturalsRecursive(n - 1);
}
