// Design, develop, code and run the program in any suitable language to solve the
// commission problem. Analyze it from the perspective of boundary value testing, derive
// different test cases, execute these test cases and discuss the test results.

#include <stdio.h>
int main()
{
    int locks, stocks, barrels, t_sales;
    float commission;
    printf("Enter the number of locks: ");
    scanf("%d", &locks);
    printf("Enter the number of stocks: ");
    scanf("%d", &stocks);
    printf("Enter the number of barrels: ");
    scanf("%d", &barrels);
    if ((locks <= 0) || (locks > 70) || (stocks <= 0) || (stocks > 80) || (barrels <= 0) || (barrels > 90))
    {
        if(locks==-1)
        printf("Program terminates");
        else
        printf("Invalid input");
    }
    else
    {
        t_sales = (locks*45) + (stocks*30) + (barrels*25);
        if(t_sales<=1000)
        {
            commission = 0.10 * t_sales;
        }
        else if(t_sales<=1800)
        {
            commission=0.10*1000;
            commission = commission + (0.15 * (t_sales-1000));
        }
        else if(t_sales>1800)
        {
            commission=0.10*1000;
            commission = commission + (0.15 * 800);
            commission = commission + (0.20 * (t_sales - 1800));
        }
        printf("The total sales is %d and commission is %f",t_sales,commission);
    }
    return 0;
}