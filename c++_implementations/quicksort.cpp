#include <iostream>
#include "quicksort.h"

//using namespace std;
int quicksort(int *array, int start, int stop)
{    
    if (start >= stop)
        return 0;

    int pivot = array[stop];
    int j = start;
    for (int i = start; i < stop; i++)
    {
        if (array[i] <= pivot)
        {
            std::swap(array[i], array[j]);
            j += 1;
        }
    }
    std::swap(array[j], array[stop]);
    quicksort(array, start, j - 1);
    quicksort(array, j + 1, stop);
    return 0;
}