#include <stdio.h>

// The declaration
int FirstVersion();

int main()
{
    FirstVersion(); // Nah i'm to lazy to do more then one here :P

    return 0;
}

int FirstVersion() 
{
    float conversionRate = 340.75;
    float drachmas, euro;

    printf("Enter the amount in drachmas: ");
    scanf("%lf", &drachmas);

    euro = drachmas / conversionRate;

    printf("Equivalent in euros is: %.2f\n", euro);

    return 0;
}