#include <stdio.h>

// The declaration
int FirstVersion();

int main()
{
    FirstVersion(); // As i say at the fa1-6: "Nah i'm to lazy to do more then one here :P"

    return 0;
}

int FirstVersion() 
{
    int x, y;
    float wCost = 300.0, rCost = 450.0;
    float wSell, rSell, tCost, tRev, wProf, rProf;

    printf("Enter the number of washing machines: ");
    scanf("%d", &x);
    printf("Enter the number of refrigerators: ");
    scanf("%d", &y);

    wSell = wCost * 1.30;               // Selling price of one washing machine after 30% markup
    rSell = rCost * 1.33;               // Selling price of one refrigerator after 33% markup
    tCost = (x * wCost) + (y * rCost);  // Total cost of all washing machines and refrigerators
    tRev = (x * wSell) + (y * rSell);   // Total revenue from selling all wa1shing machines and refrigerators
    wProf = (wSell - wCost) * x;        // Net profit from selling all washing machines
    rProf = (rSell - rCost) * y;        // Net profit from selling all refrigerators

    printf("Paid: %.2f Euro\n", tCost);
    printf("Receipts: %.2f Euro\n", tRev);
    printf("Washing machines profit: %.2f Euro\n", wProf);
    printf("Refrigerators profit: %.2f Euro\n", rProf);

    return 0;
}