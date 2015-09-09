#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getOrReadInteger(int argc, char *argv[])
{
    int n = 0;

    if (2 <= argc) {
        n = atoi(argv[1]);
    } else {
        printf("Ingresa un natural: ");
        scanf("%d", &n);
    }

    return n;
}

char *getOrReadString(int argc, char *argv[])
{
    char temp[1024];
    char *string;

    if (2 <= argc) {
        return *(argv + 1);
    } else {
        printf("Ingresa un string: ");
        fgets(temp, sizeof(temp), stdin);
        string = malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(string, temp);
        return string;
    }
}
