#include <stdio.h>


int main(){

    int a [] = {9, 11, 5, 15, 17};

    int length = 5;

    for(int i = 0; i < length; i++){
    
    for(int j = 0; j < (length - 1); j++){

        if (a[j] > a[j + 1]){

            int temp = a[j];

            a[j] = a[j + 1];

            a[j + 1] = temp;
        }
    }
    }

    for(int i = 0; i < length; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}