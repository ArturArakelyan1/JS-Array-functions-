#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int * Fill (int * arr, int size , int index, int index2, int element){
    if (index > size)
    {
        return arr;
    }
    if (index < 0)
    {
        index += size;
    }
    else if (index < -size)
    {
       index = 0;
    }
    for (size_t i = index; i < index2; ++i)
    {
        arr[i] = element;
    }
    return arr;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int * a =  Fill(arr,6,2,4,0);
    for (size_t i = 0; i < 6; i++)
    {
        printf("%d",a[i]);
    }
    
}