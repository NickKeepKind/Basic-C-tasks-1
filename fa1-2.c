#include <stdio.h>

// The declaration
int FirstVersion();
int SecondVersion();

int main()
{
    FirstVersion();     // The good version
    SecondVersion();    // The "ok" version

    return 0;
}

/* 2-nd version */
int SecondVersion() 
{
    double weightInKG;
    double weightInTons;

    printf("Enter weight of the object in kilograms: ");
    scanf("%lf", &weightInKG);
    
    weightInTons = weightInKG / 1000.0;

    printf("Object weight in tons: %.3f tons\n", weightInTons);

    return 0;
}

/* 1-st version */
int FirstVersion() 
{
    double weightInKG;

    printf("Enter weight of the object in kilograms: ");
    scanf("%f", &weightInKG);
    
    printf("Object weight in tons: %.3f tons\n", weightInKG / 1000);

    return 0;
}
