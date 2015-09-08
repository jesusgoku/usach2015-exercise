#include <stdio.h>

int caracter()
{
	int cont = 0;
	char c, temp;
	printf("Ingrese caracter: ");
	scanf("%c", &c);
	while('.' != c) {
		++cont;
		// fflush(stdin);
		scanf("%c", &temp);
		printf("\nIngrese caracter: ");
		scanf("%c", &c);
	}
	return cont;
}

int main ()
{
	int count = caracter();
	printf("\nIngresaste %d caracteres\n", count);

	return 0;
}