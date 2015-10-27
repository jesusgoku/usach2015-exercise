#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 3

typedef int Cuadrada[N][N];

void fillCuadradaTII(Cuadrada m);
void fillCuadradaTSD(Cuadrada m);
void fillCuadradaTSI(Cuadrada m);
void fillCuadradaTID(Cuadrada m);
int sumTII(Cuadrada m);
int sumTSD(Cuadrada m);
int sumTSI(Cuadrada m);
int sumTID(Cuadrada m);
void printCuadrada(Cuadrada m);

int main(int argc, char * argv[])
{
    Cuadrada m;

    fillCuadradaTII(m);
    printf("Matriz TII\n\n");
    printCuadrada(m);
    printf("\n\nSuma numeros significativos: %d\n", sumTII(m));

    fillCuadradaTSD(m);
    printf("Matriz TSD\n\n");
    printCuadrada(m);
    printf("\n\nSuma numeros significativos: %d\n", sumTSD(m));

    fillCuadradaTSI(m);
    printf("Matriz TSI\n\n");
    printCuadrada(m);
    printf("\n\nSuma numeros significativos: %d\n", sumTSI(m));

    fillCuadradaTID(m);
    printf("Matriz TID\n\n");
    printCuadrada(m);
    printf("\n\nSuma numeros significativos: %d\n", sumTID(m));

    return 0;
}

void fillCuadradaTII(Cuadrada m)
{
    srand(time(NULL));
    for (int j = 0; j < N; ++j) {
        for (int k = 0; k <= N; ++k) {
            m[j][k] = k > j ? 0 : rand() % 10;
        }
    }
}

void fillCuadradaTSD(Cuadrada m)
{
    srand(time(NULL));
    for (int j = 0; j < N; ++j) {
        for (int k = 0; k <= N; ++k) {
            m[j][k] = k < j ? 0 : rand() % 10;
        }
    }
}

void fillCuadradaTSI(Cuadrada m)
{
    srand(time(NULL));
    for (int j = 0; j < N; ++j) {
        for (int k = 0; k <= N; ++k) {
            m[j][k] = k >= (N - j) ? 0 : rand() % 10;
        }
    }
}

void fillCuadradaTID(Cuadrada m)
{
    srand(time(NULL));
    for (int j = 0; j < N; ++j) {
        for (int k = 0; k <= N; ++k) {
            m[j][k] = k >= (N - j - 1) ? rand() % 10 : 0;
        }
    }
}

int sumTII(Cuadrada m)
{
    int sum = 0;

    for (int j = 0; j < N; ++j) {
        for (int k = 0; k <= j; ++k) {
            sum += m[j][k];
        }
    }

    return sum;
}

int sumTSD(Cuadrada m)
{
    int sum = 0;

    for (int j = 0; j < N; ++j) {
        for (int k = j; k < N; ++k) {
            sum += m[j][k];
        }
    }

    return sum;
}

int sumTSI(Cuadrada m)
{
    int sum = 0;

    for (int j = 0; j < N; ++j) {
        for (int k = 0; k < (N - j); ++k) {
            sum += m[j][k];
        }
    }

    return sum;
}

int sumTID(Cuadrada m)
{
    int sum = 0;

    for (int j = 0; j < N; ++j) {
        for (int k = (N - j); k < N; ++k) {
            sum += m[j][k];
        }
    }

    return sum;
}

void printCuadrada(Cuadrada m)
{
    for (int j = 0; j < N; ++j) {
        for (int k = 0; k < N; ++k) {
            printf("%d ", m[j][k]);
        }
        printf("\n");
    }
}
