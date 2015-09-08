#include <stdio.h>

// > 100m2 se aplica un recargo del 3%
// Impuesto 12% sobre el valor del consumo

float potableWaterAccount(float consume, float unit);

int main()
{
    float consume, unit;
    printf("Ingrese el valor del m3: ");
    scanf("%f", &unit);
    printf("Ingrese los m3 consumidos: ");
    scanf("%f", &consume);
    printf("El valor de su cuenta es: %.2f\n", potableWaterAccount(consume, unit));
    return 0;
}

float potableWaterAccount(float consume, float unit)
{
    return consume * unit * 1.12 * (100 <= consume ? 1.03 : 1);
}
