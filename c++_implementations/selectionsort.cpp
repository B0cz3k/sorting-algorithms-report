#include <iostream>
#include <time.h>
#include "selectionsort.h"

int selectionSort(int *array, int size)
{
    for (int i = 0;i < size;i++)
    {
        int mindex = i;
        int minval = array[mindex];
        for (int j = i;j < size;j++)
        {
            if(array[j] < minval){
                mindex = j;
                minval = array[j];
            }
        }
        std::swap(array[i],array[mindex]);
    }
    return 0;
}