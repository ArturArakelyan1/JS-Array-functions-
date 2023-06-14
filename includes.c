#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Includes(int * arr, int size, int index , int num)
{
    if (index >= size)
    {
        return false;     
    }
    if (arr[index] == num)
    {
        return true;
    }

    if (index < 0 && arr[index + size] == num )
    {
        return true;
    }
    
    if (index < -size)
    {
        for (size_t i = 0; i < size; ++i)
        {
            if (arr[i] = num)
            {
                return true;
            }
            
        }
        return false;
    }
}