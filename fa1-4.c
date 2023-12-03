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
    int N, product;

    printf("Enter an integer: ");
    scanf("%d", &N);

    product = N * 10;
    
    printf("The product of %d and 10 is %d.\n", N, product);

    return 0;
}

/* 1-st version */
int FirstVersion() 
{
    int N;

    printf("Enter an integer: ");
    scanf("%d", &N);

    printf("The product of %d and 10 is %d.\n", N, N * 10);

    return 0;
}