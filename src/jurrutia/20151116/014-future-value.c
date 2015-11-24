#include <stdio.h>
#include <math.h>

float futureValue(float va, float i, int n);
float futureValueWithPow(float va, float i, int n);

int main(int argc, char * argv[])
{
    printf("%.2f\n", futureValue(1, 1, 8));
    printf("%.2f\n", futureValueWithPow(1, 1, 8));
    return 0;
}

float futureValue(float va, float i, int n)
{
    return 0 == n
        ? va
        : (i + 1) * futureValue(va, i, n - 1);

}

float futureValueWithPow(float va, float i, int n)
{
    return va * pow(i + 1, n);
}
