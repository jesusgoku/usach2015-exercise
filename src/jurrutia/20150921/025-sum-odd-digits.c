#include <stdio.h>

#include "utils.h"

int sumOddDigits(int num);

int main(int argc, char * argv[])
{
    int num = getOrReadInteger(argc, argv);
    printf("Suma de digitos pares del numero %d es: %d\n", num, sumOddDigits(num));
    return 0;
}

int sumOddDigits(int num)
{
    int sum = 0, temp = 0;
    while (num > 0) {
        temp = num % 10;
        if (0 == temp % 2) {
            sum += temp;
        }
        num /= 10;
    }

    return sum;
}
