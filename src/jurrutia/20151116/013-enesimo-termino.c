#include <stdio.h>

int enesimoTermino(int n);
int termino(int n);

int main(int argc, char * argv[])
{
    printf("%d\n", termino(9));
    return 0;
}

int termino(int n)
{
    return 1 == n
        ? 1
        : n + 10 * termino(n - 1);
}

int enesimoTermino(int n)
{
    if (n > 1 && n < 10) {
        return n + enesimoTermino((n - 1) * 10);
    } else if (n >= 10 && n < 100) {
        return n + enesimoTermino(((n / 10) - 1) * 100);
    } else if (n >= 100 && n < 1000) {
        return n + enesimoTermino(((n / 100) - 1) * 1000);
    } else if (n >= 1000 && n < 10000) {
        return n + enesimoTermino(((n / 1000) - 1) * 10000);
    } else if (n >= 10000 && n < 100000) {
        return n + enesimoTermino(((n / 10000) - 1) * 100000);
    } else if (n >= 100000 && n < 1000000) {
        return n + enesimoTermino(((n / 100000) - 1) * 1000000);
    } else if (n >= 1000000 && n < 10000000) {
        return n + enesimoTermino(((n / 1000000) - 1) * 10000000);
    } else if (n >= 10000000 && n < 100000000) {
        return n + enesimoTermino(((n / 10000000) - 1) * 100000000);
    } else if (n >= 100000000 && n < 100000000) {
        return n + enesimoTermino(((n / 100000000) - 1) * 1000000000);
    } else if (n >= 1000000000 && n < 1000000000) {
        return n + enesimoTermino(((n / 1000000000) - 1) * 10000000000);
    }

    return 0;
}
