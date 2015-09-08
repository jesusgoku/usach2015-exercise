#include <stdio.h>

#include "../utils.h"

void leftDigit(int n, int *result);
void leftDigitSelfMod(int *n);

int main(int argc, char *argv[])
{
    int n = getOrReadInteger(argc, argv);
    int result = 0;
    
    leftDigit(n, &result);
    printf("%d\n", result);

    leftDigitSelfMod(&n);
    printf("%d\n", n);
}

void leftDigit(int n, int *result)
{
    while (9 < n) {
        n /= 10;
    }

    *result = n;
}

void leftDigitSelfMod(int *n)
{
    while (9 < (*n)) {
        *n /= 10;
    }
}
