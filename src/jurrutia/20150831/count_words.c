#include <stdio.h>

int countWords()
{
	int count = 1;
	char c, trash;
	do {
		printf("Ingrese un caracter (. para fin): ");
		scanf("%c", &c);
		scanf("%c", &trash);
		count += ' ' == c ? 1 : 0;
	} while ('.' != c);

	return count;
}

int main()
{
	int count = countWords();
	printf("Ingresaste %d palabras\n", count);
	
	return 0;
}