#include <cstdint>
#include <iostream>

#include "exercise.h"

// Exercise 1
double array_sum(const double *p_array, const std::uint32_t &length)
{
    double sum = 0;

    for(std::uint32_t i = 0; i < length; i++){
        sum = sum + p_array[i];
    }

    return sum;
}

// Exercise 2
int *array_constructor(const int &value, const std::uint32_t &length)
{
    //TODO Fix : function creates a one element to big array
    //create an array on heap
    int* arr = new int[length];

    //init array with passed value
    for (std::uint32_t i = 0; i < length; ++i)
    {
        arr[i] = value;
    }

    return arr;
}
