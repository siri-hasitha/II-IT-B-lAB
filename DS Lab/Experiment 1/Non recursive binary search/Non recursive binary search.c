/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int iterativeBinarySearch(int array[], int start_index, int end_index, int element){
while (start_index <= end_index)
{
int middle = start_index + (end_index- start_index )/2;
if (array[middle] == element)
return middle;
else if (array[middle] < element)
start_index = middle + 1;
else
end_index = middle - 1;
}
return -1;
}


int main()
{
int array[] = {4,7,9,11,15,16,21,31,67,98};
int element;
int n = 10;
printf("Give the key element: ");
scanf("%d", &element);
int found_index = iterativeBinarySearch(array, 0, n-1, element);
if(found_index == -1 ) 
printf("Element not found in the array ");
else
printf("Element found at index : %d",found_index);
return 0;
}