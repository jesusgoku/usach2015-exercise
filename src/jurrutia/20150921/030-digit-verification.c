#include <stdio.h>

#include "utils.h"

int verificationDigit(int);

int main(int argc, char * argv[])
{
    int code = getOrReadInteger(argc, argv);
    printf("El digito verificador del codigo %d, es: %d\n", code, verificationDigit(code));
    return 0;
}

int verificationDigit(int code)
{
    int sum = 0;
    while (code > 0) {
        sum += code % 10;
        code /= 10;
    }

    return sum % 10;
}
