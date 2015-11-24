#include <stdio.h>

int countDigit(int n, int d);

int main(int argc, char * argv[])
{
    printf("%d\n", countDigit(1007, 7));
    return 0;
}

int countDigit(int n, int d)
{
    if (n > 0) {
        return (n % 10 == d ? 1 : 0) + countDigit(n / 10, d);
    }

    return 0;
}
