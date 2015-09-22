#include <stdio.h>

typedef struct Date {
    int day;
    int month;
    int year;
} Date;

int readDate();
void parseDate(int rawDate, int *day, int *month, int *year);
void parseDateStruct(int rawDate, Date *date);
Date parseDateCopyStruct(int rawDate);


int main(int argc, char *argv[])
{
    int rawDate = 0, day = 0, month = 0, year = 0;
    Date date;
    
    rawDate = readDate();

    parseDate(rawDate, &day, &month, &year);
    printf("Día: %d - Mes: %d - Año: %d\n", day, month, year);

    parseDateStruct(rawDate, &date);
    printf("Día: %d - Mes: %d - Año: %d\n", date.day, date.month, date.year);

    parseDateCopyStruct(rawDate);
    printf("Día: %d - Mes: %d - Año: %d\n", date.day, date.month, date.year);

    return 0;
}

int readDate()
{
    int rawDate = 0;
    printf("Ingresa una fecha (formato: DDMMAAA): ");
    scanf("%d", &rawDate);
    return rawDate;
}

void parseDate(int rawDate, int *day, int *month, int *year)
{
    *year = rawDate % 10000;
    *month = (rawDate / 10000) % 100;
    *day = (rawDate / 1000000);
}

void parseDateStruct(int rawDate, Date *date)
{
    parseDate(rawDate, &(date->day), &(date->month), &(date->year));
}

Date parseDateCopyStruct(int rawDate)
{
    Date date;
    parseDate(rawDate, &(date.day), &(date.month), &(date.year));
    return date;
}
