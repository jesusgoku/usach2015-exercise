#include <stdio.h>

#define N 10

typedef int Digits[N];

void freqDigits(Digits d, int n);

int main(int argc, char * argv[])
{
    return 0;
}

void freqDigits(Digits d, int n)
{
    if (n > 0) {
        d[n % 10] += 1;
        freqDigits(d / 10);
    }
}
