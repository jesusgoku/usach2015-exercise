#include <stdio.h>

void nPrintN(int n);

int main (int argc, char **argv[])
{
	nPrintN(10);
	return 0;
}

void nPrintN(int n)
{
	for (int j = n; 0 < j; --j) {
		for (int k = 0; k < j; ++k) {
			printf("%d ", j);
		}
		printf("\n");
	}
}

// hpinche51@gmail.com