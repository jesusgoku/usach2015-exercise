#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define MIN_IMC 20.5

typedef struct {
    int age;
    float weight;
    float height;
} Person;

typedef Person Table[N];

void fillTable(Table t, int n);
void printTable(Table t, int n);
int imcLess(Table t, int n);
int imcLessRecursive(Table t, int n);
int randBeetwen(int min, int max);
float randBeetwenFloat(float min, float max);
float imc(float weight, float height);

int main(int argc, char * argv[])
{
    Table t;
    fillTable(t, N);
    printTable(t, N);
    printf("Person less min: %d\n", imcLessRecursive(t, N));
    return 0;
}

void fillTable(Table t, int n)
{
    srand(time(NULL));

    for (int k = 0; k < n; ++k) {
        t[k].age = rand() % 50;
        t[k].weight = randBeetwen(0, 150);
        t[k].height = randBeetwenFloat(1.5, 2);
    }
}

void printTable(Table t, int n)
{
    printf(
        "%3s | %5s | %10s | %10s | %5s\n",
        "N",
        "Age",
        "Weight",
        "Height",
        "IMC"
    );
    printf("---------------------------------------------\n");
    for (int k = 0; k < n; ++k) {
        printf(
            "%3d | %5d | %10.2f | %10.2f | %5.2f\n",
            k + 1,
            t[k].age,
            t[k].weight,
            t[k].height,
            imc(t[k].weight, t[k].height)
        );
    }

}

int imcLess(Table t, int n)
{
    int count = 0;
    float personImc;

    for (int k = 0; k < n; ++k) {
        personImc = t[k].weight / t[k].height * t[k].height;
        if (personImc < MIN_IMC) {
            ++count;
        }
    }

    return count;
}

int imcLessRecursive(Table t, int n)
{
    int k = n - 1;
    float personImc = imc(t[k].weight, t[k].height);
    if (0 == k) {
        return personImc < MIN_IMC ? 1 : 0;
    } else {
        return (personImc < MIN_IMC ? 1 : 0) + imcLessRecursive(t, n - 1);
    }
}

int randBeetwen(int min, int max)
{
    return (rand() % (max - min)) + min;
}

float randBeetwenFloat(float min, float max)
{
    int intMin = (int) min;
    int intMax = (int) max;
    return rand() % (intMax - intMin) + min;
}

float imc(float weight, float height)
{
    return weight / height * height;
}
