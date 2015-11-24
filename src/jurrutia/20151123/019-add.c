#include <stdio.h>

#define N 7

typedef int Vector[N];

void add(Vector v, Vector w, int n);
void addEfficient(Vector v, Vector w, int n);
int sumNTerm(Vector v, int n);
void printVector(Vector v, int n);

int main(int argc, char * argv[])
{
    Vector v = {3, 5, 2, 6, 8 ,4, 1};
    Vector w;
    addEfficient(v, w, N);
    printVector(w, N);
    add(v, w, N);
    printVector(w, N);
    return 0;
}

void addEfficient(Vector v, Vector w, int n)
{
    if (1 == n) {
        w[n - 1] = v[n - 1];
    } else {
        addEfficient(v, w, n - 1);
        w[n - 1] = w[n - 2] + v[n - 1];
    }
}

void add(Vector v, Vector w, int n)
{
    w[n - 1] = sumNTerm(v, n);
    if (1 != n) {
        add(v, w, n - 1);
    }
}

int sumNTerm(Vector v, int n)
{
    return 1 == n ? v[n - 1] : v[n - 1] + sumNTerm(v, n - 1);
}

void printVector(Vector v, int n)
{
    for (int k = 0; k < n; ++k) {
        printf("%d ", v[k]);
    }
    printf("\n");
}
