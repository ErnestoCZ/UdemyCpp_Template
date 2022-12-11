#include <iostream>
#include "exercise.h"
#include "stdio.h"

void mod_cross_sum(int I, int J)
{
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            int sum = i + j;

            if ( sum % 2 == 0)
            {
                std::cout << "number is even : sum : "<< sum << std::endl;
            }else
            {
                std::cout << "number is odd" << std::endl;
            }
        }

    }

}
