#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

typedef int Vector[N];

void fillVector(Vector v, int m);
void printVector(Vector v, int n);
int minValue(Vector v, int n, int min);

int main(int argc, char * argv[])
{
    Vector v;
    fillVector(v, N);
    printVector(v, N);
    printf("El valor minimo es: %d\n", minValue(v, N, v[N -1]));
    return 0;
}

void fillVector(Vector v, int n)
{
    srand(time(NULL));
    for (int k = 0; k < n; ++k) {
        v[k] = rand() % N;
    }
}

void printVector(Vector v, int n)
{
    for (int k = 0; k < n; ++k) {
        printf("%d\n", v[k]);
    }
}

int minValue(Vector v, int n, int min)
{
    min = v[n - 1] < min
        ? v[n - 1]
        : min;

    return 1 == n
        ? min
        : minValue(v, n - 1, min);
}

