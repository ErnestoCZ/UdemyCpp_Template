#include <cstdint>
#include <iostream>

#include "exercise.h"

namespace computation
{

// Exercise 1
double mean_array_value(int *array, const std::uint32_t &length)
{
    if(length == 0) return -1;

    double mean = 0.0;

    for (std::uint32_t i = 0; i < length; i++)
    {
        mean += array[i];
    }

    mean /= length;
    return mean;
}

double mean_array_value(double *array, const std::uint32_t &length)
{
    if(length == 0) return -1;

    double mean = 0.0;

    for (std::uint32_t i = 0; i < length; i++)
    {
        mean += array[i];
    }

    mean /= length;
    return mean;
}


} // namespace computation
