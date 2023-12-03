#include <stdio.h>

// The declaration
int FirstVersion();

int main()
{
    FirstVersion();

    return 0;
}

int FirstVersion() 
{
    int days, years, months, weeks, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 360;
    months = (days % 360) / 30;
    weeks = ((days % 360) % 30) / 7;
    remainingDays = ((days % 360) % 30) % 7;

    printf("%d days is equivalent to %d years, %d months, %d weeks, and %d days.\n",
           days, years, months, weeks, remainingDays);

    return 0;
}