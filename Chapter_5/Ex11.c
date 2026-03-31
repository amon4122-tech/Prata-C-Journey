#include <stdio.h>
#define SIZE 8

int main(void){
    int numbers[SIZE];
    printf("Enter eight number on array:");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
        if (i < SIZE - 1)
            printf("Enter next number:"); 
    }
    printf("Revers array: ");
    for (int j = SIZE - 1; j >=0; j--){
        printf("%d, ", numbers[j]);
    }
    printf("\n");
    
    return 0;
}
