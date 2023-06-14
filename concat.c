#include<stdio.h>
#include<stdlib.h>

int * MyConcat(int* ch1, int* ch2, int size1, int size2)
{
    int * tmp = (int*)malloc(size1 + size2);
    int j = 0;
    for (int i = 0; i < size1 ; ++i)
    {
        tmp[j] = ch1[i];
        ++j;
    }
    for (int i = 0; i < size2; ++i)
    {
        tmp[j] = ch2[i];
       ++j;
    }
    return tmp;
}

int main(){
    int arr1[] = {1,2,3};
    int arr2[] = {4,5,6};
    int * arr = MyConcat(arr1,arr2,3,3);
    for (size_t i = 0; i < 6; i++)
    {
        printf("%d", arr[i]);
    }
    
}