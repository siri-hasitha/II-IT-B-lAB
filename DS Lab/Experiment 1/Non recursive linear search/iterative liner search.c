/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int linear_search(int arr[], int n, int t)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == t)
            return i;
    }
    return -1;
}
void main()
{
    int arr[] = {11,7,9,16,21,4,15,98,67,31};
    int t ;
    int n = sizeof(arr) / 4;
    printf("give the key element ");
    scanf("%d", &t);
    int result = linear_search(arr, n, t);
    if (result == -1)
        printf("Element is not  in the array ");
    else
        printf("Element %d is present at index %d", t, result);
    return 0;
}