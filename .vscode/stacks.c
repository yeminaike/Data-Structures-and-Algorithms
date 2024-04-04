#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct{

int *collection;

int capacity;

int size;

}Stack;




Stack *create_stack(int capacity); //big stack object is the heap 

void destroy_stack(Stack *stack);

bool is_full(Stack *stack);
bool is_empty(Stack *stack);
bool pop(Stack *stack, int *item);
bool push(Stack *stack,  int item);
bool peek(Stack *stack, int *item);

int main(void){

Stack *stack  = create_stack(5);

if( stack == NULL){
    printf("Error creating stack.\n");
    return 1;
}

if(is_empty(stack)) 
printf("Stack is empty\n");


   

push(stack, 2);
push(stack, 5);
push(stack, 20);
push(stack, 28);
push(stack, 23);



if(is_full(stack)){
    printf("stack is full\n");
}
    


printf("Stack size: %d\n", stack-> size);

bool try_push = push(stack, 20);

if(try_push == false){
     printf("failed to push\n");
}


// int peek_val = 0;

// peek(stack, &peek_val);

// printf("PeekValue: %d\n", peek_val);



int pop_value =0;

for (int i = 0; i < 5; i++) {
    
    if (pop(stack, &pop_value))
        printf("Popped Value: %d\n", pop_value);
}


bool try_pop = pop(stack, &pop_value);
if(try_pop == false) {

    printf("pop failed.\n");

}







destroy_stack(stack);

return 0;

}




Stack *create_stack(int capacity){

    if (capacity <= 0) return NULL;

    Stack *stack  = malloc(sizeof(stack)); 

    if(stack == NULL) return NULL;

    stack -> collection = malloc(sizeof(int) * capacity);

    if(stack-> collection == NULL){

        // free(stack); 
        return NULL;
    }

    stack->capacity = capacity; 
    stack ->size = 0;

    return stack;
}

    void destroy_stack(Stack *stack){
        free(stack -> collection);
        free(stack);
    }


    bool is_full(Stack *stack){
        return stack->capacity == stack->size;
    }

    bool is_empty(Stack *stack){
        return stack->size == 0;
    }


    bool push(Stack *stack,  int item){

        if(is_full(stack)) return -1;


        
         stack->collection[stack->size] = item; //we sare setting the element to the collection array at the stack size index to put the elemment at the top of the stack
        stack -> size++;
        return true;
    }

    bool peek(Stack *stack, int *item){

        if(is_empty(stack)) return -1;

        *item = stack->collection[stack-> size-1];
        return true;
    }


    bool pop(Stack *stack, int *item){

        if(is_empty(stack)) return -1;

        stack->size--;

        *item = stack->collection[stack-> size]; //deferencing item to pass by value at the stop of that stack there by decementing the element at the top of the stack
        return true;

    }



