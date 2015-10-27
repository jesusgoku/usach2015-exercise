#include <stdio.h>

#define N 5

typedef int Cuadrada[N][N];

void fillCuadrada(Cuadrada m);
void printCuadrada(Cuadrada m);

int main(int argc, char * argv[])
{
    Cuadrada cuadrada;

    fillCuadrada(cuadrada);
    printCuadrada(cuadrada);
    return 0;
}

void fillCuadrada(Cuadrada m)
{
    int add = 0;
    for (int j = 0; j < N; ++j) {
        for (int k = 0; k < N; ++k) {
            add = j + k;
            m[j][k] = add >= N ? add - N : add;
        }
    }
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
