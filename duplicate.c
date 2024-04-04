#include <stdio.h>

int main() {
    int array[] = {11,37, 23, 37, 30, 37};

    int length = sizeof(array)/ sizeof(array[0]);

 
    int maxOccurence = 0;
    int duplicateValue = 0;
    int occurence;

for (int i = 0; i < length; i++){

           int occurences = 0;


    for( int j = 0; j < length; j++){

        if(array[i] == array[j]){

            occurences = occurences + 1;
            
        }
        
    }

    if( occurences > maxOccurence){

        maxOccurence = occurences;
        duplicateValue = array[i];


    }

}
printf("maxOccurences: %d\n", maxOccurence);
printf("duplicateValue: %d\n", duplicateValue);
return 0;
    }