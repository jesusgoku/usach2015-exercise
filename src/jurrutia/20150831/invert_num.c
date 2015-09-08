#include <stdio.h>

int invertNum(int num)
{
	int invert = 0, i = 0;
	while (0 < num) {
		invert = 10 * invert + (num % 10);
		num /= 10;
	}

	return invert;
}

int main()
{
	int num = 3746;
	printf("%d, %d\n", num, invertNum(num));
	return 0;
}