#include <stdio.h>
#include <math.h>
#define SIZE 8

int main(void){

    int i;
    double numbers[SIZE];
    for (i = 0; i < SIZE; i++) {
        numbers[i] = pow( 2, i+1);
    }
    
    printf("Array of 2: ");
    i = 0;
    do{
        printf("%g", numbers[i]);
        if (i < SIZE-1) printf(", ");
        i++;
    } while (i < SIZE);
    
    printf("\n");
    
    return 0;
}
