#include <stdio.h>

#include "utils.h"

int sigle(int);

int main(int argc, char * argv[])
{
    int year = getOrReadInteger(argc, argv);
    printf("El año %4d, corresponde al siglo: %4d\n", year, sigle(year));
    return 0;
}

int sigle(int year)
{
    return year / 100 + 1;
}
