// Design, develop, code and run the program in any suitable language to solve 
// thecommission problem. Analyze it from the perspective of dataflow testing, derive 
// different test cases, execute these test cases and discuss the testresults.

#include <stdio.h>
#include <conio.h>

int main() {
    int locks, stocks, barrels, totalLocks = 0, totalStocks = 0, totalBarrels = 0;
    float lockPrice = 45.0, stockPrice = 30.0, barrelPrice = 25.0;
    float lockSales, stockSales, barrelSales, totalSales, commission;

    printf("Enter the number of locks (to exit the loop, enter -1):\n");
    scanf("%d", &locks);

    while (locks != -1) {
        printf("Enter the number of stocks and barrels:\n");
        scanf("%d%d", &stocks, &barrels);

        if (locks < 0 || stocks < 0 || barrels < 0) {
            printf("Invalid input. Please enter non-negative values.\n");
        } else {
            totalLocks += locks;
            totalStocks += stocks;
            totalBarrels += barrels;
        }

        printf("Enter the number of locks (to exit the loop, enter -1):\n");
        scanf("%d", &locks);
    }

    printf("\nTotal locks = %d\n", totalLocks);
    printf("Total stocks = %d\n", totalStocks);
    printf("Total barrels = %d\n", totalBarrels);

    lockSales = lockPrice * totalLocks;
    stockSales = stockPrice * totalStocks;
    barrelSales = barrelPrice * totalBarrels;
    totalSales = lockSales + stockSales + barrelSales;

    printf("\nThe total sales = %.2f\n", totalSales);

    if (totalSales > 1800.0) {
        commission = 0.10 * 1000.0;
        commission += 0.15 * 800.0;
        commission += 0.20 * (totalSales - 1800.0);
    } else if (totalSales > 1000.0) {
        commission = 0.10 * 1000.0;
        commission += 0.15 * (totalSales - 1000.0);
    } else {
        commission = 0.10 * totalSales;
    }

    printf("The commission is = %.2f\n", commission);

    return 0;
}
