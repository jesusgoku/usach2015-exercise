#include <stdio.h>

#define N 10

typedef int Calls[N];

int totalPhoneCallsSeconds(Calls c, int n);

int main(int argc, char * argv[])
{
    return 0;
}

int totalPhoneCallsSeconds(Calls c, int n)
{
    return (1 != n)
        ? c[n - 1] + totalPhoneCallsSeconds(n - 1)
        : c[n - 1];
}
