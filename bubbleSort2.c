#include <stdio.h>


void bubbleSort(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int length = 5;
    int arr[length];


    printf("Enter number: \n");
    for(int i =0; i < length; i++){
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, length);

    
    printf("Sorted array:\n");
    for (int i = 0; i < length; i++) {
        printf("a[%d] = %d\n", i, arr[i]);
    }


    return 0;
}
