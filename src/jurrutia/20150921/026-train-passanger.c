#include <stdio.h>

void passangers();

int main(int argc, char * argv[])
{
    passangers();

    return 0;
}

void passangers()
{
    int station = 1;
    int in = 0, out = 0;
    int passangers = 0;

    do {

        printf("==========\nEstacion %d\n==========\n\n", station);

        printf("Ingrese la cantidad de pasajeros que entran y salen (formato: entran,salen): ");
        scanf("%d,%d", &in, &out);

        if (-1 == in && -1 == out) {
            break;
        }

        passangers = passangers + in - out;
        printf("\n\nReporte Estacion %d\n===================\n\n", station);
        printf("\n%-20s: %d\n%-20s: %d\n",
            "Bajaron",
            out,
            "Pasajeros a bordo",
            passangers
        );

        printf("\n\n");

        ++station;
    } while (-1 != in && -1 != out);
}
