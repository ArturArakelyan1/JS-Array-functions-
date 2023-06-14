#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int find(int * arr, int size, bool (*ptr) (int))
{
    for (size_t i = 0; i < size; ++i)
    {
        if (ptr(arr[i]))
        {
            return arr[i];
        }
        
    }
    return -1;
}