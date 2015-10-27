#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 100

typedef int Cuadrada[N][N];

void fillCuadradaTII(Cuadrada m);
int sumTII(Cuadrada m);
void printCuadrada(Cuadrada m);

int main(int argc, char * argv[])
{
    Cuadrada m;

    fillCuadradaTII(m);
    printf("Matriz TTI\n\n");
    printCuadrada(m);
    printf("\n\nSuma numeros significativos: %d\n", sumTII(m));

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

int sumTII(Cuadrada m)
{
    float sum = 0;

    for (int j = 0; j < N; ++j) {
        for (int k = 0; k <= j; ++k) {
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
