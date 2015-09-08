#include <stdio.h>

float serie01(int n)
{
	float sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += (float) 1 / (2 * i + 1);
	}

	return sum;
}

float serie02(int n)
{
	float sum = 0;
	for (int i = 0; i < n; ++i) {
		// printf("signo: %d, numerador: %d, denominador: %d\n", ((1 == i % 2) ? -1 : 1), (i + 1), (i+2));
		sum += ((1 == i % 2) ? -1 : 1) * ((float) (i + 1) / (i + 2));
	}

	return sum;
}

float serie02b(int n)
{
	float sum = 0;
	for (int i = 0, s = 1; i < n; ++i, s *= -1) {
		sum += s * ((float) (i + 1) / (i + 2));
	}

	return sum;
}

float serie02c(int n)
{
	float sum = 0;
	for (int i = 0, s = 1; i < n; ++i, s = -s) {
		sum += s * ((float) (i + 1) / (i + 2));
	}

	return sum;
}

int main(int argc, char **argv)
{
	int n = 2;
	printf("%d terminos de: 1 + 1/3 + 1/5 ... : %.5f\n", n, serie01(n));
	printf("%d terminos de: 1/2 - 2/3 + 3/4 ... : %.5f\n", n, serie02(n));
	printf("%d terminos de: 1/2 - 2/3 + 3/4 ... : %.5f\n", n, serie02b(n));
	printf("%d terminos de: 1/2 - 2/3 + 3/4 ... : %.5f\n", n, serie02c(n));

	return 0;
}