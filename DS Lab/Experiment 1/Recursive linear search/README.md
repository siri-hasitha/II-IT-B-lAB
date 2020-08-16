
# Aim: Write a program that uses recursive function to perform linear search.

## Linear search:Linear search in C to find whether a number is present in an array. If it's present, then at what location it occurs. It is also known as a sequential search. It is straightforward and works as follows: we compare each element with the element to search until we find it or the list ends.

### step by step procedure:

### key element = 99

1.Here the given array is {11,7,9,16,24,4,15,98,54,60} and the target number is 15. 

2.First the n value is 10 since n value is not zero it will go to the next condition that it will check the 9th index element with the target number.

3.since the condition is not satisfied it will go to the next condition in which the linear search function will be called again with the number of elements decreased by 1, this will repeat till the
value 0 is returned or the index of the target value is returned.

4.Here since the element is 15. the value of n is 10 since the n is not 0 it will check the 9th index element
with the target number

5.60 is not equal to 15 then the linear search function is called again with the number of elements 9 and again n is not equal to 0 then the element of the 8th index is checked with the
target number which is not true.

6. so when the linear search function is called again at index 7 its not true as it moves onto index 6 both the of them are equal and it prints '15 is found at the index 6'.

![output](Recursive linear search key element = 15.png)

### key element = 99
1.Here the given array is {11,7,9,16,24,4,15,98,54,60} and the target number is 99. 

2.First the n value is 10 since n value is not zero it will go to the next condition

3.It will check the 9th index element with the target number and since the condition is not satisfied it will go to the next condition in which the linear
search function will be called again with the number of elements decreased by 1

4.This will repeat till the value 0 is returned or the index of the target value is returned.

5.Here since the target value 99 is not present in the array the linear search will repeat till the n value becomes 0.

6.since the key element doesnt match with any element in the array it prints 'Element not in the array'.

![output](Recursive linear search key element = 99.png)

