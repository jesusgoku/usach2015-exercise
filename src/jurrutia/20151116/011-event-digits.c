#include <stdio.h>

int evenDigits(int n);

int main(int argc, char * argv[])
{
    printf("%d\n", evenDigits(2323232));
    return 0;
}

int evenDigits(int n)
{
    if (n > 0) {
        return evenDigits(n / 10) + (n % 2 == 1 ? 1 : 0);
    }

    return 0;
}
