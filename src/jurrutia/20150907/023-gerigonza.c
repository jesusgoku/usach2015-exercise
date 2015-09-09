#include <stdio.h>

void gerigonza();

int main(int argc, char *argv[])
{
    gerigonza();
}

void gerigonza()
{
    char c;
    while ((c = getchar()) != '.') {
        printf("%c", c);
        if ('a' == c
            || 'e' == c
            || 'i' == c
            || 'o' == c
            || 'u' == c
            || 'A' == c
            || 'E' == c
            || 'I' == c
            || 'O' == c
            || 'U' == c) {
            printf("p%c", c);
        }
    }
    printf("\n");
}
