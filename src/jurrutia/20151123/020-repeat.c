#include <stdio.h>

void repeat(int n, int count);
void repeatTeacher(int n, int m);

int main(int argc, char * argv[])
{
    repeat(5, 1);
    repeatTeacher(5, 5);
    return 0;
}

void repeat(int n, int count)
{
    if (1 == n) {
        printf("%2d\n", n);
    } else {
        if (n == count) {
            printf("%2d\n", n);
            repeat(n - 1, 1);
        } else {
            printf("%2d ", n);
            repeat(n, count + 1);
        }
    }
}

void repeatTeacher(int n, int m)
{
    if (n > 0) {
        printf("%2d ", n);
        if (m > 1) {
            repeatTeacher(n, m - 1);
        } else {
            printf("\n");
            repeatTeacher(n - 1, n - 1);
        }
    }
}
