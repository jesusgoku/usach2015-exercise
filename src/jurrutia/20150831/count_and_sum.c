#include <stdio.h>

int countDigits(int n)
{
	int count = 0;
	while (0 < n) {
		++count;
		n /= 10;
	}

	return count;
}

int sumDigits(int n)
{
	int sum = 0;
	while (0 < n) {
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

int main()
{
	int num = 3748;
	printf("Ingresa un numero: ");
	scanf("%d", &num);
	printf("El numero: %d tiene %d digitos.\n", num, countDigits(num));
	printf("El numero: %d sus numeros suman: %d\n", num, sumDigits(num));
	return 0;
}