#include<stdio.h>
#include<stdlib.h>

typedef int (*CallBackfn)(int,int,int,int[]);
int Reduce(int * arr, int size, CallBackfn callback,int initialvalue){
    int acumulator = initialvalue;
    for (size_t i = 0; i < size; ++i)
    {
        if (acumulator != 0)
        {
            acumulator = callback(acumulator, arr[i], i, arr);
        } else {
            acumulator = arr[i];
        }
    }
    return acumulator;
}


int sumCallback(int accumulator, int currentValue, int currentIndex, int arr[]) {
    return accumulator + currentValue;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call myReduce with the sumCallback function as the callback
    int result = Reduce(arr, size, sumCallback, 0);
    printf("Result: %d\n", result);

    return 0;
}