#include <stdio.h>

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
    int number, sum;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("The number is not three-digit.\n");
        return 1;
    }

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    sum = hundreds + tens + ones; 

    printf("The sum of the digits of the three-digit number is %d.\n", sum);

    return 0;
}

int FirstVersion() 
{
    int number, digit, sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) 
    {
        printf("The number is not three-digit.\n");
        return 1;
    }

    while (number > 0) 
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("The sum of the digits of the three-digit number is %d.\n", sum);

    return 0;
}