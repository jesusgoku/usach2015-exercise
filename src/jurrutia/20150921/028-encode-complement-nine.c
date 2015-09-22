#include <stdio.h>

#include "utils.h"

int encodeComplementNine(int);

int main(int argc, char * argv[])
{
    int n = getOrReadInteger(argc, argv);
    printf("El digito %d codificado es: %d\n", n, encodeComplementNine(n));
    return 0;
}

int encodeComplementNine(int num)
{
    int numEncode = 0;

    for (int k = 1; num > 0; k *= 10, num /= 10) {
        numEncode += k * (9 - (num % 10));
    }

    return numEncode;
}
