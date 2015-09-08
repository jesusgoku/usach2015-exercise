#include <stdio.h>

int minValue(int a, int b);

int main()
{
    int a,b;
    printf("Ingresa un numero: ");
    scanf("%d", &a);
    printf("Ingrese otro numero: ");
    scanf("%d", &b);
    printf("El menor numero entre %d y %d es: %d\n", a, b, minValue(a, b));
    return 0;
}

int minValue(int a, int b)
{
    return a < b ? a : b;
}
