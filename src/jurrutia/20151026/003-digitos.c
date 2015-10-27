#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

typedef int Vector[N];

void printVector(Vector v, int n);
void fillVector(Vector v, int n);
void fill0Vector(Vector v, int n);
void countDigits(Vector v, int d);

int main(int argc, char * argv[])
{
    Vector v;
    int num;
    printf("Ingresa un entrero positivo: ");
    scanf("%d", &num);
    fill0Vector(v, N);
    printf("Numero: %d\n", num);
    countDigits(v, num);
    printf("Cantidad digitos:\n");
    printVector(v, N);

    return 0;
}

void printVector(Vector v, int n)
{
    for (int k = 0; k < n; ++k) {
        printf("%d ", v[k]);
    }
    printf("\n");
}

void fillVector(Vector v, int n)
{
    srand(time(NULL));
    for (int k = 0; k < n; ++k) {
        v[k] = rand() % N;
    }
}

void fill0Vector(Vector v, int n)
{
    for (int k = 0; k < n; ++k) {
        v[k] = 0;
    }

}

void countDigits(Vector v, int d)
{
    if (0 == d) {
        v[0]++;
        return;
    }

    while (d > 0) {
        v[d % 10]++;
        d /= 10;
    }
}

