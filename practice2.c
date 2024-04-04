#include <stdio.h>
#include <math.h> 

void  f(char c, float y){

int r = 0;
 y = 0.0;

if(c > '0' && c <='9'){

    r = r + 10;
     y = sqrt(r);
   
}


 printf(" %d = r\n", r);
 printf("y= %f\n", y);

}



int main(){

char c = '9';

float y = 0.0;


f(c,y);

return 0;
}