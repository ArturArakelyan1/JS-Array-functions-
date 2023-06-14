#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

bool Every(int * arr, int size, bool(*prt)(int a)){
    for (size_t i = 0; i < size; ++i)
    {
        if (!prt(arr[i]))
        {
            return false;
        }
        
    }
    return true;
}

bool rhs(int a)
{
    return a > 0;
}
int main(){
    int arr1[] = {1,2,3};
    printf("%d",Every(arr1,3,rhs));
}