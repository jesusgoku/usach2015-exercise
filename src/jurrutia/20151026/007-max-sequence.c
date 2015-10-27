#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

typedef int Vector[MAX];

int maxSequence(Vector v, int n);
void printVector(Vector v, int n);
void fillVector(Vector v, int n);

int main(int argc, char * argv[])
{
    Vector v;
    fillVector(v, MAX);
    printf("Vector a probar:\n");
    printVector(v, MAX);
    printf("La maxima secuencia es: %d\n", maxSequence(v, MAX));
    return 0;
}

int maxSequence(Vector v, int n)
{
    int max = 0, count = 1;
    for (int k = 1; k < n; ++k) {
        if (v[k] > v[k - 1]) {
            ++count;
        } else {
            if (count > max) {
                max = count;
            }
            count = 1;
        }
    }

    return count > max ? count : max;
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
        v[k] = rand() % 100;
    }
}
