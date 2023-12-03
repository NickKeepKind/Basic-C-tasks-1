#include <stdio.h>

// The declaration
int FirstVersion();
int SecondVersion();
int ThirdVersion();
int FourthVersion();

int main()
{
    FirstVersion();     // The smart version
    SecondVersion();    // The good version
    ThirdVersion();     // The "ok" version
    FourthVersion();    // The "mah" version

    return 0;
}

/* 4-th version */
int FourthVersion()
{
    int a, b, c, results;

    printf("Enter your first number: \n");
    scanf("%d", &a);
    printf("Enter your second number: \n");
    scanf("%d", &b);
    printf("Enter your third number: \n");
    scanf("%d", &c);

    results = a + b + c;

    printf("Your numbers sum is: %d\n", results);

    return 0;
}

/* 3-rd version */
int ThirdVersion()
{
    int a, b, c, results;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    results = a + b + c;

    printf("Your numbers sum is: %d\n", results);

    return 0;
}

/* 2-nd version */
int SecondVersion()
{
    int a, b ,c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Your numbers sum is: %d\n", a + b + c);

    return 0;
}

/* 1-st version */
int FirstVersion() 
{
    int sum = 0, number, count = 0;

    printf("Enter three numbers: ");

    while (count++ < 3 && scanf("%d", &number)) 
    {
        sum += number;
    }

    printf("Your numbers sum is: %d\n", sum);

    return 0;
}