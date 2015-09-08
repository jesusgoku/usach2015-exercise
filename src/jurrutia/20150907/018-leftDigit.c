#include <stdio.h>
#include <stdlib.h>

#include "../utils.h"

int leftDigit(int n);
int leftDigitIterative(int n);

int main(int argc, char *argv[])
{
    int n = getOrReadInteger(argc, argv);
    printf("%d\n", leftDigit(n));
    printf("%d\n", leftDigitIterative(n));
}

int leftDigit(int n)
{
    return 9 < n ? leftDigit(n / 10) : n;
}

int leftDigitIterative(int n)
{
    while (9 < n) {
        n /= 10;
    }
    return n;
}

