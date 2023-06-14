#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FindLastIndex(int * arr, int size, bool(*ptr)(int)){
    for (int  i = size - 1; i >= 0; --i)
    {
        if (ptr(arr[i]))
        {
            return i;
        }
        
    }
    return -1;
}