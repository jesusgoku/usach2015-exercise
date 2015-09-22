#include <stdio.h>

#include "utils.h"

int isNumberPalindromo(int);

int main(int argc, char * argv[])
{
    int num = getOrReadInteger(argc, argv);
    printf("El numero %d %s palindromo.\n", num, (isNumberPalindromo(num) ? "es" : "no es"));
    return 0;
}

int isNumberPalindromo(int num)
{
    int invert = 0;
    int original = num;
    while (num > 0) {
        invert = 10 * invert + (num % 10);
        num /= 10;
    }

    return invert == original;
}
