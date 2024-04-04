#include <stdio.h>

int main() {
    int array[] = {1, 3, 4, 7, 9};
    int largest = 0;
    int secondLargest = 0;
    int index;
    int length = sizeof(array) / sizeof(array[0]);




    for (index = 0; index < length; index++) {
        // printf("Checking array[%d] = %d\n", index, array[index]);
        
        
        if(array[index] > largest){
             secondLargest = largest;
            largest = array[index];

            printf("The newLargest number: %d\n", largest);

        }else if(array[index] > secondLargest && array[index] != largest){

            secondLargest = array[index];
        }

              
    }

    printf("%d is the largest number\n", largest);
    printf("%d is the second largest number\n", secondLargest);

    return 0;
}
