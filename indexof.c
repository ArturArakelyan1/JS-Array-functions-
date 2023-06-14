#include<stdio.h>
#include<stdlib.h>

int IndexOf(int * arr, int size, int num)
{
    for (size_t i = 0; i < size; ++i)
    {
        if (arr[i] == num)
        {
            return i;
        }
        
    }
    return -1;
}
