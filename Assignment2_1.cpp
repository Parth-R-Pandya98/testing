/**
C++ was used to create this code.
This program will produce 10 unique random number arrays, each with a size of 100000, 1000000, and 10000000.
Thus, there will be a total of 30 arrays.
Execution:
first random array is filled with given size 100000, 1000000, and 10000000 each size array 10 different random arrays 
are generated first execution time for random to sorted array time taken, then sorted array to sorted array
execution time , sorted to reverse array execution time is displayed for each size arrays.
*/

#include<iostream>
#include <time.h>
#include <algorithm>
#include <iomanip>
#include "Assignment2_1_head.h"
using namespace std;


int main()
{
    // Predefined size arrays 
    int array_size[] = {100000, 1000000, 10000000}; 

    // for displaying time for all sizes 10 arrays
    double time_array[3][10]; 

    // Knowing whats the size of the array
    unsigned int test_cases = sizeof(array_size)/ sizeof(array_size[0]);
    
    for(unsigned int round=0; round< test_cases; round++)
    {

        // calculating time for size of array 10
        for(unsigned int column=0; column<10; column++)
        {
            // Knowing size array of and creating array
            int size = array_size[round]; 
            int *arr = new int[size];

            // filling random values in an array
            int row = 0;
            for (int temp_size = 0; temp_size < size; temp_size++) 
                arr[temp_size] = rand();

            // calculating array execution for random time
            clock_t start_time1 = clock();
            sort(arr, arr+ size);
            time_array[0][column] = (double)(clock() - start_time1)/CLOCKS_PER_SEC;

            // calculating sorted array execution for sorted time
            clock_t start_time2 = clock();
            sort(arr, arr+ size);
            time_array[1][column] = (double)(clock() - start_time2)/CLOCKS_PER_SEC;
            // array values are reversed
            reverse(arr, arr + size);

            // Calculating execution time for inverse array values 
            clock_t start_time3 = clock();
            sort(arr, arr+ size);
            time_array[2][column] = (double)(clock() - start_time3)/CLOCKS_PER_SEC;

        }
        // Displaying all sizes array execution time
        display(array_size[round], time_array);
    }

    return 0;
}