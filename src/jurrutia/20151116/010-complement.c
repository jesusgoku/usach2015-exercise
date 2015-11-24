#include <stdio.h>
#include <math.h>

// int complement(int n, int pos);
int complementTwo(int n, int pow);

int main(int argc, char * argv[])
{
    // printf("%d\n", complement(309, 0));
    printf("%d\n", complementTwo(309, 1));
    return 0;
}

// int complement(int n, int pos)
// {
//     if (n > 0) {
//         return ((9 - n % 10) * pow(10, pos)) + complement(n / 10, ++pos);
//     } else {
//         return (9 - n % 10) * pow(10, pos);
//     }
// }

int complementTwo(int n, int pow)
{
    return n > 0
        ? pow * (9 - n % 10) + complementTwo(n / 10, pow * 10)
        : 0;
}
