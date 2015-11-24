#include <stdio.h>

int sucesion(int);

int main(int argc, char * argv[])
{
    for (int i = 0; i <= 6; ++i) {
        printf("n = %d: %d\n", i, sucesion(i));
    }
    return 0;
}

int sucesion(int n)
{
    if (0 == n) {
        return n;
    } else {
        return (n * sucesion(n - 1) + n);
    }
}
