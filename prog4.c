// Design and develop a program in a language of your choice to solve the triangle problem
// defined as follows: Accept three integers which are supposed to be the three sides of atriangle 
// and determine if the three values represent an equilateral triangle, isoscelestriangle, scalene 
// triangle, or they do not form a triangle at all. Assume that the upper limitfor the size of any 
// side is 10. Derive test cases for your program based on boundary-value analysis, equivalence 
// class partitioning and decision-table approach and execute thetest cases and discuss the 
// results.

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides of the tirangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a > 0 && a <= 10 && b > 0 && b <= 10 && c > 0 && c <= 10)
    {
        if((a+b>c) && (b+c)>a && (a+c)>b)
        {
            if((a==b) && (b==c))
            {
                printf("It is an equilateral triangle");
            }
            else if(a==b || b==c || a==c)
            {
                printf("It is an Isosceles triangle");
            }
            else
            {
                printf("It is an Scalene triangle");
            }
        }
        else
        {
            printf("Not a triangle");
        }
    }
    else
    {
        printf("The side length has to be under 1 and 10");
    }
}