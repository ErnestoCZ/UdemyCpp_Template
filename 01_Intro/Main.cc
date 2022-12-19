#include <iostream>
#include "cstddef"


    double array_sum(const double *p_array, const std::uint32_t &length)
    {
    std::uint32_t counter = 0;
    double sum = 0;

    for(std::int32_t i = 0; i < length; i++){
        sum = sum + p_array[i];
    }

    return sum;
    };

int main()
{
    // Exercise 1
    const std::uint32_t array_length = 100;
    double sum = 0.0;

    double *p_array1 = nullptr;
    p_array1 = new double[array_length];    //allocate an array on heap

    for (std::uint32_t i = 0; i < 100; i++)
    {
        p_array1[i] = i; //automatical direct converting through compiler base address and additional offset
    };

    std::cout << array_sum(p_array1,array_length) << std::endl;



    return 0;
}
