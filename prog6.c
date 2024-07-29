// .Design, develop, code and run the program in any suitable language to implement the
// binary search algorithm. Determine the basis paths and using them derive different testcases,
// execute these test cases and discuss the test results
#include<stdio.h>
void main()
{
    int a[100],n,i,key,mid;
    int left=0,right=n-1,result=-1;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key: ");
    scanf("%d",&key);

    for(i=0;left<=right;i++)
    {
        mid = left + (right -left) / 2;

        if (a[mid] == key)
        {
            result = mid;
        }
        if(a[mid]<key)
        {
            left = mid +1;
        }
        else
        {
            right = mid -1;
        }
    }
    if(result!=-1)
    {
        printf("Element is present at index %d\n", result);
    }
    else
    {
        printf("Element is not present in array\n");
    }
}