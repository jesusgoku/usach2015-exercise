#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

typedef struct {
    char code;
    int stock;
    float price;
} Product;

typedef Product Storage[N];

int warning(Storage b, int min, int n);
void fillStorage(Storage b, int n);
void printStorage(Storage b, int n);

int main(int argc, char * argv[])
{
    Storage b;
    fillStorage(b, N);
    printStorage(b, N);
    printf("\n\nNum of products with stock less to %d is: %d\n", 500, warning(b, 500, N));
    return 0;
}

void fillStorage(Storage b, int n)
{
    srand(time(NULL));
    for (int k = 0; k < n; ++k) {
        b[k].code = (rand() % 20) + 65;
        b[k].stock = rand() % 1000;
        b[k].price = (rand() % 10000) + 1000;
    }
}

void printStorage(Storage b, int n)
{
    printf("%5s + %10s + %10s\n", "_____", "_________", "__________");
    printf("%5s | %10s | %10s |\n", "CODE", "STOCK", "PRICE");
    printf("%5s | %10s | %10s |\n\n", "_____", "_________", "__________");
    for (int k = 0; k < n; ++k) {
        printf("%5c | %10d | %10.0f |\n", b[k].code, b[k].stock, b[k].price);
    }
}

int warning(Storage b, int min, int n)
{
    int sum = 0;
    for (int k = 0; k < n; ++k) {
        if (b[k].stock < min) {
            ++sum;
        }
    }

    return sum;
}
