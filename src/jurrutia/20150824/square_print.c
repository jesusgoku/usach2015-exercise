#include <stdio.h>

void squarePrint(char c);
void squareSquare(char c);

int main()
{
	squarePrint('*');
	squareSquare('*');
    return 0;
}

void squarePrint(char c)
{
	int n;
	printf("Ingresa un numero mayor que 0: ");
	scanf("%d", &n);
	for (int j = 1; j <= n; ++j) {
		for (int k = 1; k <= n; ++k) {
			if (1 == j || n == j || 1 == k || n == k) {
				printf("%c ", c);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

void squareSquare(char c)
{
	int n;
	printf("Ingresa un numero mayor que 0: ");
	scanf("%d", &n);
	for (int j = 1; j <= n; ++j) {
		for (int k = 1; k <= n; ++k) {
			if (1 == j % 2 || 1 == j % 2 || 1 == k % 2 || 1 == k % 2) {
				printf("%c ", c);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}

}
