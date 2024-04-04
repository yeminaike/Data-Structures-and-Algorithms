#include <stdio.h>

int main(){

int product1 [5][1] = {{189}, {123}, {356}, {104}, {205}};
int product2 [5][1] = {{28}, {89}, {54}, {13}, {18}};
int product3 [5][1]  = {{132}, {356}, {128}, {108}, {102}};
int product4 [5][1] = {{12}, {18}, {28}, {35}, {23}};

int totalSumProduct1 = 0;
int totalSumProduct2 = 0;
int totalSumProduct3 = 0;
int totalSumProduct4 = 0;
int percentageProduct1;
int percentageProduct2;
int percentageProduct3;
int percentageProduct4;

int rowIndex;

int columnIndex;


for(rowIndex = 0; rowIndex <5; rowIndex++){

    for(columnIndex = 0; columnIndex < 1; columnIndex++){

        totalSumProduct1 = totalSumProduct1 + product1[rowIndex][columnIndex];

    }
}

for(rowIndex = 0; rowIndex < 5; rowIndex++){

    for (columnIndex = 0; columnIndex <1; columnIndex++){

        totalSumProduct2 = totalSumProduct2 + product2[rowIndex][columnIndex];
    }
}


for(rowIndex = 0; rowIndex < 5; rowIndex++){

    for (columnIndex = 0; columnIndex <1; columnIndex++){

        totalSumProduct3 = totalSumProduct3 + product3[rowIndex][columnIndex];
    }
}

for(rowIndex = 0; rowIndex < 5; rowIndex++){

    for (columnIndex = 0; columnIndex <1; columnIndex++){

        totalSumProduct4 = totalSumProduct4 + product4[rowIndex][columnIndex];
    }
}

percentageProduct1 = totalSumProduct1 * 5 / 100;
percentageProduct2 = totalSumProduct2 * 5 / 100;
percentageProduct3 = totalSumProduct3 * 5 / 100;
percentageProduct4 = totalSumProduct4 * 5 / 100;

if (percentageProduct1 > 50) {
        printf("Product 1 exceeds 50%% of total sales.\n");
    }
   else if (percentageProduct2 > 50) {
        printf("Product 2 exceeds 50%% of total sales.\n");
    }
    else if (percentageProduct3 > 50) {
        printf("Product 3 exceeds 50%% of total sales.\n");
    }
    else if(percentageProduct4 > 50) {
        printf("Product 4 exceeds 50%% of total sales.\n");
    }else{
        printf("None of the products exceeds 50%%\n");
    }
    
    


printf("The total sum of sales for product1 is %d\n", totalSumProduct1);

printf(" The percentage sales of product1 is %d%%\n", percentageProduct1);

printf(" The percentage sales of product2 is %d%%\n", percentageProduct2);
printf("The total sum for product 2 is %d\n", totalSumProduct2);

printf("The total sum for product 3 is %d\n", totalSumProduct3);
printf("The total percentage for product 3 is %d%%\n", percentageProduct3);

printf("The total sum for product 4 is %d\n", totalSumProduct4);
printf("The total percentage for product 4 is %d%%\n", percentageProduct4);

return 0;

}
