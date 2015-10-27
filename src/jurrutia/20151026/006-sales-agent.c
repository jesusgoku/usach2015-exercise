#include <stdio.h>

#define STRING_MAX 20
#define REGIONS 2

typedef char String[STRING_MAX];

typedef struct {
    String name;
    int code;
    int sales;
} SalesAgent;

typedef SalesAgent Team[REGIONS];

void readSalesAgentData(SalesAgent *salesAgent);
void createSalesAgentTeam(Team t);
void updateSalesAgentSales(Team t, int code, int sales);
int getSalesAgentTeamTotalSales(Team t);

int main(int argc, char * argv[])
{
    Team t;
    createSalesAgentTeam(t);
    updateSalesAgentSales(t, 111, 2000);
    updateSalesAgentSales(t, 222, 3000);
    printf("\nTotal de ventas de los agentes: %d\n", getSalesAgentTeamTotalSales(t));
    return 0;
}

void readSalesAgentData(SalesAgent *salesAgent)
{
    printf("\n\nCreate Sales Agent\n=======================\n\n");

    printf("Enter name: ");
    scanf("%s", salesAgent->name);

    printf("Enter code: ");
    scanf("%d", &(salesAgent->code));

    printf("Enter sales: ");
    scanf("%d", &(salesAgent->sales));

    printf("\nSummary:\n");
    printf("Name: %s - Code: %d - Sales: %d\n", salesAgent->name, salesAgent->code, salesAgent->sales);
}

void createSalesAgentTeam(Team t)
{
    for (int k = 0; k < REGIONS; ++k) {
        readSalesAgentData(&(t[k]));
    }
}

void updateSalesAgentSales(Team t, int code, int sales)
{
    printf("Searching ...");
    for (int k = 0; k < REGIONS; ++k) {
        printf("Sales Agent: %s\n", t[k].name);
        if (t[k].code == code) {
            printf("Found: %s, assing: %d\n", t[k].name, sales);
            t[k].sales = sales;
            break;
        }
    }
}

int getSalesAgentTeamTotalSales(Team t)
{
    int total = 0;
    for (int k = 0; k < REGIONS; ++k) {
        total += t[k].sales;
    }
    return total;
}
