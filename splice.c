#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 int * Splice  (int * arr, int size , int index, int count, int elemnet){
    if (count = 0)
    {
        int * tmp = (int*) malloc (size + 1);
        for(int i = 0; i  < size + 1; ++i) {
            if(i < index) {
                tmp[i] = arr[i];
            }
            if(i == index) {
                tmp[i] = elemnet;
            } else {
                tmp[i] = arr[i - 1];
            }
            }
        return tmp;
	}
    
    }
