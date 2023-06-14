#include<stdio.h>
#include<stdlib.h>

int * Reverse(int * arr, int size){
    for (size_t i = 0; i < size / 2; ++i)
    {
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
    return arr;
}