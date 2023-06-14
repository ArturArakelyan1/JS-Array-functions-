#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int * Filter(int* arr, int size, bool(*check)(int))
{
    int * tmp = (int*) malloc(size);
    int count = 0;
    for (size_t i = 0; i < size; ++i)
    {
        if (check(arr[i]))
        {
            tmp[count] = arr[i];
            count++;
        }   
    }
    tmp = (int*) realloc(tmp,count * sizeof(int));
    return tmp;
}

