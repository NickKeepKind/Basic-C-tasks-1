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
    int threeM, twoM, ftM;          // Made shots for three-pointers, two-pointers, and free throws
    int threeA, twoA, ftA;          // Attempted shots for three-pointers, two-pointers, and free throws
    int totalPts;                   // Total points
    float threePct, twoPct, ftPct;  // Percentages for three-pointers, two-pointers, and free throws

    printf("Enter made and attempted three-pointers: ");
    scanf("%d %d", &threeM, &threeA);
    printf("Enter made and attempted two-pointers: ");
    scanf("%d %d", &twoM, &twoA);
    printf("Enter made and attempted free throws: ");
    scanf("%d %d", &ftM, &ftA);

    // Calculating total points
    totalPts = threeM * 3 + twoM * 2 + ftM;

    // Calculating success rates
    threePct = threeA > 0 ? (float)threeM / threeA * 100 : 0;   // Cast to float to perform floating point division for an accurate percentage; if no attempts, rate is 0%
    twoPct = twoA > 0 ? (float)twoM / twoA * 100 : 0;           // Same logic as above ↑
    ftPct = ftA > 0 ? (float)ftM / ftA * 100 : 0;               // Same logic as above ↑
    // Okay that shit above ↑ is pretty hard, so i use a little bit of ChatGPT. 
    // But the "?" and the ":" is my idea, couse it replaces and saves us a lot of lines of code
    // Or it's gonna look like this ↓ and that's sucks:
    /*
    if (threeA > 0) 
    {
    threePct = (float)threeM / threeA * 100;
    } else {
    threePct = 0;
    }
    
    if (twoA > 0) 
    {
    twoPct = (float)twoM / twoA * 100;
    } else {
    twoPct = 0;
    }
    
    if (ftA > 0) 
    {
    ftPct = (float)ftM / ftA * 100;
    } else {
    ftPct = 0;
    } */

    printf("Total points: %d\n", totalPts);
    printf("Three-point success rate: %.2f%%\n", threePct);
    printf("Two-point success rate: %.2f%%\n", twoPct);
    printf("Free throw success rate: %.2f%%\n", ftPct);

    return 0;
}