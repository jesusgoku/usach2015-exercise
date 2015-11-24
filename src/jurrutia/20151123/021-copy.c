#include <stdio.h>

#define N 2

typedef int Vector[N];
typedef int Matrix[N][N];

void copy(Matrix m, Vector v, int n);
void printVector(Vector v, int n);

int main(int argc, char * argv[])
{
    Matrix m = {
        {1,2},
        {3,4}
    };
    Vector v;
    copy(m, v, N);
    printVector(v, N);
    return 0;
}

void copy(Matrix m, Vector v, int n)
{
    v[n - 1] = m[n - 1][n - 1];
    if (n > 1) {
        copy(m, v, n - 1);
    }
}

void printVector(Vector v, int n)
{
    for (int k = 0; k < n; ++k) {
        printf("%d ", v[k]);
    }
    printf("\n");
}
