#include <stdio.h>

typedef struct {
    int age;
    float weight;
    float size;
} Person;

void fillPerson(Person *person);
void printPerson(Person *person);

int main(int argc, char * argv[])
{
    Person person;
    fillPerson(&person);
    printPerson(&person);
    return 0;
}

void fillPerson(Person *person)
{
    printf("Enter age: ");
    scanf("%d", &(person->age));

    printf("Enter weight: ");
    scanf("%f", &(person->weight));

    printf("Enter size: ");
    scanf("%f", &(person->size));
}

void printPerson(Person *person)
{
    printf("Age: %d - Weight: %.1f - Size: %.1f\n", person->age, person->weight, person->size);
}
