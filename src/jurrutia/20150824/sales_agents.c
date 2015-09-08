#include <stdio.h>

int main()
{
	float saA, saB, saC, temp;
	char salesCode, buff;
	saA = saB = saC = temp = 0;
	do {
		printf("Introducir el monto de la boleta (0 para finalizar): ");
		scanf("%f", &temp);
		// Fix to clean buffer
		scanf("%c", &buff);
		if (0 != temp) {
			printf("Introduce el codigo del vendedor (A,B,C): ");
			scanf("%c", &salesCode);

			if ('A' == salesCode) {
				saA += temp;
			} else if ('B' == salesCode) {
				saB += temp;
			} else if ('C' == salesCode) {
				saC += temp;
			} else {
				printf("Agente no encontrado. Factura no asignada.\n");
			}
		}
		printf("\n----------------------------------------------------\n");
	} while (0 != temp);
	printf("La comision para las ventas del vendedor A es: %.2f\n", saA * 0.05);
	printf("La comision para las ventas del vendedor B es: %.2f\n", saB * 0.05);
	printf("La comision para las ventas del vendedor C es: %.2f\n", saC * 0.05);
    return 0;
}
