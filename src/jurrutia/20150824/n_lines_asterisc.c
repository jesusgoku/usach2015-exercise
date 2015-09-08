#include <stdio.h>

void nLinesChar(char c);

int main()
{
	nLinesChar('*');
    return 0;
}

void nLinesChar(char c)
{
	int n;
	printf("Introduce un numero mayor que 0: ");
	scanf("%d", &n);
	for (int j = 0; j < n; ++j) {
		for (int k = 0; k <= j; ++k) {
			printf("%c", c);
		}
		printf("\n");
	}
}
