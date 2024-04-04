#include <stdio.h>
#include <math.h> 


int main(){

int counter = 0; 

int num;
// int index;

printf("Enter a number:  ");
scanf("%d", &num);


// for(index = 2; index<num/2; index++){


//     if(num % index ==0){
//         counter = counter + 1;
//     }
// }


int index = 2;

while(index < num/2){

    if(num % index == 0){
        counter = counter + 1;
        index++;
    }
}
if(counter == 0 && num!= 1){

    printf("number %d is a prime number", num);
}else{
    printf("number %d is not a prime number", num);
}




}