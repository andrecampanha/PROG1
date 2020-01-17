#include <stdio.h>

int hoursMin(int totalMins, int *hours, int *minutes)
{
    *hours = totalMins / 60;
    *minutes = totalMins % 60;
    return *hours >= 24;
}

int main()
{
    int totalMins, hours, minutes, mDay;
    printf("Insira o total de minutos: "); scanf("%d", &totalMins);
    mDay = hoursMin(totalMins, &hours, &minutes);

    printf("%d minutos correspondem a %02dh:%02dm e %sé superior a 1 dia.\n", totalMins, hours, minutes, mDay ? "" : "não ");
}