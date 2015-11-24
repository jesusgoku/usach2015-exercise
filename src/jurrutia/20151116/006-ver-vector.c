#include <stdio.h>

#define N 25

typedef int Vector[N];

void showVector(Vector v, int n);
void digits(Vector v, int n);

int main(int argc, char * argv[])
{
    Vector v;
    digits(v, N);
    showVector(v, N);
    return 0;
}

void showVector(Vector v, int n)
{
    if (n > 0) {
        showVector(v, n - 1);
        printf("%d ", v[n - 1]);
    }
}

void digits(Vector v, int n)
{
    if (n > 0) {
        v[n - 1] = (n - 1) % 10;
        digits(v, n - 1);
    }
}
