// Design, develop, code and run the program in any suitable language to implement theNext
// Date function. Analyze it from the perspective of equivalence class value testing, derive
// different test cases, execute these test cases and discuss the test results

#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, d, m, y, nd, nm, ny, ndays; 
    printf("Enter the date, month, year: ");
    scanf("%d%d%d", &d, &m, &y);

    if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0)) {
        month[1] = 29; // February has 29 days in a leap year
    }
    ndays = month[m-1];
    if((y<1812) || (y>2012) || (d<1) || (d>ndays) || (m<1) || (m>12))
    {
        printf("Invalid input!");
    }
    else
    {
        nd = d+1;
        nm = m;
        ny = y;

        if(nd > ndays)
        {
            nd = 1;
            nm++;
        }
        if(nm>12)
        {
            nm = 1;
            ny++;
        }
        printf("The current date is: %d-%d-%d\n",&d,&m,&y);
        printf("The next date is: %d-%d-%d",&nd,&nm,&ny);
    }
}