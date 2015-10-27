#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define M 7
#define N 10

typedef int VectorC[M];
typedef int VectorF[N];;
typedef int Matriz[N][M];

void fillMatriz(Matriz matriz, int n, int m);
void sumMatrizCols(VectorC cols, Matriz matriz, int n, int m);
void sumMatrizRows(VectorF rows, Matriz matriz, int n, int m);
void printMatriz(Matriz matriz, int n, int m);
void printVector(int vector[], int n);

int main(int argc, char * argv[])
{
    Matriz matriz;
    VectorC cols;
    VectorF rows;

    fillMatriz(matriz, N, M);
    printf("\n\nMatriz original:\n\n");
    printMatriz(matriz, N, M);

    printf("\n\nSuma columnas\n\n");
    sumMatrizCols(cols, matriz, N, M);
    printVector(cols, M);

    printf("\n\nSuma filas\n\n");
    sumMatrizRows(rows, matriz, N, M);
    printVector(rows, N);


    return 0;
}

void fillMatriz(Matriz matriz, int n, int m)
{
    srand(time(NULL));

    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < m; ++k) {
            matriz[j][k] = rand() % 10;
        }
    }
}

void sumMatrizCols(VectorC cols, Matriz matriz, int n, int m)
{
    for (int j = 0; j < m; ++j) {
        cols[j] = 0;
        for (int k = 0; k < n; ++k) {
            cols[j] += matriz[k][j];
        }
    }
}

void sumMatrizRows(VectorF rows, Matriz matriz, int n, int m)
{
    for (int j = 0; j < n; ++j) {
        rows[j] = 0;
        for (int k = 0; k < m; ++k) {
            rows[j] += matriz[j][k];
        }
    }
}

void printMatriz(Matriz matriz, int n, int m)
{
    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < m; ++k) {
            printf("%d ", matriz[j][k]);
        }
        printf("\n");
    }
}

void printVector(int vector[], int n)
{
    for(int k = 0; k < n; ++k) {
        printf ("%d ", vector[k]);
    }
    printf("\n");
}
