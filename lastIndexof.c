#include<stdlib.h>
#include<stdio.h>

int LastIndexOf(int * arr, int size, int num)
{
    for (size_t i = size - 1; i >= 0; ++i)
    {
        if (arr[i] = num)
        {
            return i;
        }
        
    }
    return -1;
}