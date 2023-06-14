#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Some(int * arr, int size, bool (*ptr)(int))
{
    for (size_t i = 0; i < size; i++)
    {
        if (ptr(arr[i]))
        {
            return true;
        }
    }
    return false;
}