#include <stdio.h>


int main(){

int myArray[] = {2,4,5,0,3,10};

int length = sizeof(myArray) / sizeof(myArray[0]);

int rev = 0;

for( int i = 0; i < length/2; i++){

 printf("Check my array[%d] = %d\n",i, myArray[i]);
rev = myArray[i];



 myArray[i] = myArray[length - i - 1];
 
myArray[length - i - 1] = rev;

 printf("Checking my array[%d] = %d\n",i, myArray[i]);


}

for(int i = 0; i < length; i++ )

printf("myArray[%d]= %d\n", i, myArray[i]);

return 0;

}