#include <stdio.h>

#define FLOORS 9
#define DEPTOS_BY_FLOOR 9

typedef struct Depto {
    int number;
    int area;
    int value;
} Depto;

typedef Depto Tower[FLOORS][DEPTOS_BY_FLOOR];

void assignTowerNumbers(Tower t);
void printTowerNumbers(Tower t);

int main(int argc, char * argv[])
{
    Tower t;
    assignTowerNumbers(t);
    printTowerNumbers(t);
    return 0;
}

void assignTowerNumbers(Tower t)
{
    for (int k = 0; k < FLOORS; ++k) {
        for (int j = 0; j < DEPTOS_BY_FLOOR; ++j) {
            t[k][j].number = ((k + 1) * 10) + (j + 1);
        }
    }
}

void printTowerNumbers(Tower t)
{
    for (int k = 0; k < FLOORS; ++k) {
        for (int j = 0; j < DEPTOS_BY_FLOOR; ++j) {
            printf("%d ", t[k][j].number);
        }
        printf("\n");
    }
}
