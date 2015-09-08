#include <stdio.h>

#define CALIFICATION 4

// 4 practicas calificadas
// La nota final se obtiene promediando las 3 mejores notas

float minValue(int numValues, float values[]);
float averageLabCalification(int numValues, float values[]);

int main()
{
    float n[4];
    float temp;
    for (int i = 0; i < CALIFICATION;++i) {
        printf("Dame la nota numero %d: ", i + 1);
        scanf("%f", &temp);
        n[i] = temp;
    }
    printf("La nota mas baja es: %.2f\n", minValue(CALIFICATION, n));
    printf("El promedio de laboratorio es: %.2f\n", averageLabCalification(CALIFICATION, n));
    return 0;
}

float averageLabCalification(int numValues, float values[])
{
	float min = minValue(numValues, values);
	float sum = 0;
	int foundMin = 0;
	for (int i = 0; i < numValues; ++i) {
		sum += values[i] == min && 0 == foundMin ? 0 : values[i];
		if (values[i] == min) foundMin = 1;
	}
	return sum / (numValues - 1);
}

float minValue(int numValues, float values[])
{
	float min = values[0];
	for (int i = 0; i < numValues; ++i) {
		min = values[i] < min ? values[i] : min;
	}
	return min;
}
