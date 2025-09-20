#pragma once

#include <cstdint>
class Math
{
public:
    Math() = default;
    ~Math() = default;
    uint32_t Sum(uint32_t FNumber, uint32_t SNumber);
    uint32_t Subtract(uint32_t FNumber, uint32_t SNumber);
    uint32_t Multiply(uint32_t FNumber, uint32_t SNumber);
    uint32_t Divide(uint32_t FNumber, uint32_t SNumber);
};
