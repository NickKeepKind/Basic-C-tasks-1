#include <stdio.h>
#include <string.h>

// The declaration
int FirstVersion();
int SecondVersion();

int main()
{
    FirstVersion();     // The smart version
    SecondVersion();    // The good version

    return 0;
}

int SecondVersion()
{
    char city[50];
    float temp1, temp2, temp3, avgF, tempC;

    printf("Enter the name of the city: ");
    scanf("%49s", city);

    printf("Enter temperature at point 1 in Fahrenheit: ");
    scanf("%f", &temp1);
    printf("Enter temperature at point 2 in Fahrenheit: ");
    scanf("%f", &temp2);
    printf("Enter temperature at point 3 in Fahrenheit: ");
    scanf("%f", &temp3);

    avgF = (temp1 + temp2 + temp3) / 3;
    tempC = 5 * (avgF - 32) / 9;

    printf("The average temperature in %s is %.2f degrees Celsius.\n", city, tempC);

    return 0;
}

int FirstVersion()
{
    char city[50];
    float tempF, avgF = 0, tempC;

    printf("Enter the name of the city: ");
    fgets(city, sizeof(city), stdin); // Reads a line from stdin into the buffer pointed to by city

    for (int i = 0; i < 3; i++) 
    {
        printf("Enter temperature at point %d in Fahrenheit: ", i + 1);
        scanf("%f", &tempF), avgF += tempF; // YEP I KNOW IT'S BAD PRACTICE TO PUT BOTH "SCANF" & "ADDITION" IN ONE LINE, BUT WHY NOT?
    }

    avgF /= 3;                      // Avg temp in Fahrenheit
    tempC = 5 * (avgF - 32) / 9;    // Swap Fahrenheit to Celsius

    printf("The average temperature in %s is %.2f degrees Celsius.\n", city, tempC);

    return 0;
}