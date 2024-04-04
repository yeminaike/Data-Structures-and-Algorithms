#include <stdio.h>

int linearSearch(int arr[], int size, int key){


    for(int i = 0; i < size; i++){


        if(arr[i] == key){
        return i;

        }else if(arr[i] > key){

            return -1;
        }
    }
    return -1;
}


int main(){
int arr[] = {1,4,6,10};

int size = sizeof(arr) / sizeof(arr[0]);

int key = 4;

int index = linearSearch(arr, size, key);

if(index == -1){
    printf("The element is not found in the array");
}else{
    printf("The element is found in the array at  arr[%d]\n", index);
}

return 0;

}