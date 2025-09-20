#include <cstdint>
#include <stdexcept>
#include "math.hpp"

uint32_t Math::Sum(uint32_t FNumber, uint32_t SNumber)
{
    uint32_t temp = FNumber + SNumber;
    return  temp;
}

uint32_t Math::Subtract(uint32_t FNumber, uint32_t SNumber)
{
    uint32_t temp = FNumber - SNumber;
    return  temp;
}

uint32_t Math::Multiply(uint32_t FNumber, uint32_t SNumber)
{
    uint32_t temp = FNumber * SNumber;
    return  temp;
}

uint32_t Math::Divide(uint32_t FNumber, uint32_t SNumber)
{
    uint32_t temp = 0;
    if(0 == SNumber)
    {
         throw std::invalid_argument("Division by zero");
    }
    else
    {
        
        temp = FNumber / SNumber;
    }
    return  temp;
    
}