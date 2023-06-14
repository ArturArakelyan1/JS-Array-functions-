#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* slice(int* arr, int size, int count) {
    int* tmp = (int*)malloc(sizeof(int) * (size - count));
    for(int i = 0; i < size - count; ++i) {
        tmp[i] = arr[i];
    }
    return tmp;
}
