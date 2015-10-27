#include <stdio.h>

typedef int Vector[];

int main(int argc, char * argv[])
{
    return 0;
}

void sort(Vector v, int n)
{
    int temp;
    for (int k = 0; k < (n-1); ++k) {
        for (int j = k + 1; i < n; ++j) {
            if (v[k] > v[j]) {
                temp = v[k];
                v[k] = v[j];
                v[j] = temp;
            }
        }
    }
}
