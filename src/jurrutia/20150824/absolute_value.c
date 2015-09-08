#include <stdio.h>

float absolute(float x);

int main()
{
    float x;
    printf("Ingrese el valor de x: ");
    scanf("%f", &x);
    printf("El valor absoluto de %.2f es: %.2f\n", x, absolute(x));
    return 0;
}

float absolute(float x)
{
    return 0 > x ? -x : x;
}
