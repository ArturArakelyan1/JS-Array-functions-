#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int FindIndex(int * arr, int size, bool (*ptr) (int)){
    for (size_t i = 0; i < size; i++)
    {
       if (ptr(arr[i]))
       {
        return i;
       }
       
    }
    return -1;
}