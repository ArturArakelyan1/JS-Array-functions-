#include<stdio.h>
#include<stdlib.h>

void ForEach(int* arr, int size, void (*funcptr)(int)) {
  for (int i = 0; i < size; ++i) {
    funcptr(arr[i]);
  }
}
    void print(int a){
        printf("%d",a);
    }
int main(){
    int arr1[] = {1,2,3};
   ForEach(arr1,3,print);
}