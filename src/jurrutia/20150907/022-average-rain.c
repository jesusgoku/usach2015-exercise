#include <stdio.h>
#include <string.h>

float averageRain();
float averageRainReload();

int main ()
{
    printf("Promedio de agua caida v0.0.1\n\n");
    printf("El Promedio es: %.2f\n", averageRain());
    printf("El Promedio es: %.2f\n", averageRainReload());
    return 0;
}

float averageRain()
{
    int sum = 0;
    int numData = 0;
    int dateOrMilimeters = 0;
    do {
        printf("Ingrese el día: ");
        scanf("%d", &dateOrMilimeters);

        if (0 == dateOrMilimeters) {
            return 0 != numData ? (float) sum / numData : numData;
        }

        printf("Ingrese la cantidad: ");
        scanf("%d", &dateOrMilimeters);

        sum += dateOrMilimeters;
        ++numData;
    } while (1);
}

float averageRainReload()
{
    int sum = 0, numData = 0, milimeters = 0;
    char day[7];
    do {
        printf("Ingrese (formato: DDMMYY C): ");
        scanf("%s %d", day, &milimeters);
        if (0 == strcmp(day, "0")) {
            return 0 != numData ? (float) sum / numData : numData;
        }
        sum += milimeters;
        ++numData;
    } while (1);
}