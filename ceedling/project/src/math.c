#include <stdio.h>

unsigned int Sum(unsigned int FNumber, unsigned int SNumber)
{
    unsigned int temp = FNumber + SNumber;
    return  temp;
}

unsigned int Subtract(unsigned int FNumber, unsigned int SNumber)
{
    unsigned int temp = FNumber - SNumber;
    return  temp;
}

unsigned int Multiply(unsigned int FNumber, unsigned int SNumber)
{
    unsigned int temp = FNumber * SNumber;
    return  temp;
}

unsigned int Divide(unsigned int FNumber, unsigned int SNumber)
{
    unsigned int temp = 0;
    if(0 == SNumber)
    {
        printf("error\n");
    }
    else
    {
        
        temp = FNumber / SNumber;
    }
    return  temp;
    
}