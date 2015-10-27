#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

typedef int Vector[N];

void invertVector(Vector v, int n);
void printVector(Vector v, int n);
void fillVector(Vector v, int n);

int main(int argc, char * argv[])
{
    Vector v;
    fillVector(v, N);
    printf("Vector original:\n");
    printVector(v, N);
    invertVector(v, N);
    printf("Vector invertido:\n");
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

void invertVector(Vector v, int n)
{
    int temp, index;
    for (int k = 0; k < (n / 2); ++k) {
        index = n - 1 - k;
        temp = v[k];
        v[k] = v[index];
        v[index] = temp;
    }
}
