#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

typedef float Polinomy[MAX];

void fillPolinomy(Polinomy p);
void printPolinomy(Polinomy p);
float evalPolinomy(Polinomy p, float x);

int main(int argc, char * argv[])
{
    Polinomy p;
    float x = 2;
    fillPolinomy(p);
    printf("Coeficientes de el polinomio:\n");
    printPolinomy(p);
    printf("El resultado de evaluar el polinomio con x = %.2f es: %.2f\n", x, evalPolinomy(p, x));
    return 0;
}

void fillPolinomy(Polinomy p)
{
    srand(time(NULL));
    for (int k = 0; k < MAX; ++k) {
        p[k] = rand() % 10;
    }
}

void printPolinomy(Polinomy p)
{
    for (int k = 0; k < MAX; ++k) {
        printf("%.2f ", p[k]);
    }
    printf("\n");
}

float evalPolinomy(Polinomy p, float x)
{
    float res = 0;
    for (int k = 0; k < MAX; ++k) {
        res += p[k] * pow(x, k);
    }

    return res;
}
