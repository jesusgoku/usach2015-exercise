#include <stdio.h>

#define N 11

typedef int Table[N];

void genMultiplyTable(Table t, int n);
void printTable(Table t, int n);

int main(int argc, char * argv[])
{
    Table t;
    t[0] = 12;
    genMultiplyTable(t, N - 1);
    printTable(t, N - 1);
    return 0;
}

void genMultiplyTable(Table t, int n)
{
    t[n] = t[0] * n;
    if (1 != n) {
        genMultiplyTable(t, n - 1);
    }
}

void printTable(Table t, int n)
{
    printf("%5dx | %10s\n", t[0], "Result");
    printf("-------------------\n");
    for (int k = 1; k <= n; ++k) {
        printf("%6d | %10d\n", k, t[k]);
    }
}
