#include<stdio.h>
#include<stdlib.h>
int * Map(int * arr, int size, int (*pred (int))){
    int * tmp = (int*) malloc (size);
    if (tmp == NULL)
    {
        return NULL;
    }
    
    for (size_t i = 0; i < size; ++i)
    {
        tmp[i] = pred(arr[i]);
    }
    return tmp;
} 
