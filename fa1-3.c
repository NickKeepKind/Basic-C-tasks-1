#include <stdio.h>

// The declaration
int FirstVersion();
int SecondVersion();

int main()
{
    FirstVersion();     // The good version
    SecondVersion();    // The good version 2

    return 0;
}

/* 2-nd variation */
int SecondVersion() 
{
    int a, b, result;

    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);

    result = (a + b) * (a - b);

    printf("The result of the function (A + B) * (A - B) is: %d\n", result);

    return 0;
}

/* 1-st variation */
int FirstVersion()
{
    int a, b;

    printf("Enter the value of A and B: ");
    scanf("%d %d", &a, &b);
    printf("The result of the function (A + B) * (A - B) is: %d\n", (a + b) * (a - b));
    
    return 0;
}