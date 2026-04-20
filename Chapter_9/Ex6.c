#include <stdio.h>

void reverse(double array[], int n);

int main(void){
    int size;
    printf("Enter the size of the array:");
    if (scanf("%d", &size)!=1) {
        printf("The size must be an integer!\n");
        return -1;
    }
    printf("The size of the array = %d\n", size);
    double arr_numb[size];
    printf("Enter the data of the array:");
        for (int i = 0; i < size; i++) {
            scanf("%lf", &arr_numb[i]);
    }
    printf("Original array:");
    for (int i = 0; i < size; i++) {
        printf("%g ",arr_numb[i]);
    }
    putchar('\n');
    
    reverse(arr_numb, size);
    
    printf("Reverse array:");
    for (int i = 0; i < size; i++) {
        printf("%g ",arr_numb[i]);
    }
    putchar('\n');
    
    return 0;   
}

void reverse(double array[], int n) {
    double temp; 
    for (int i = 0; i < n / 2; i++) {
        temp = array[i];                   
        array[i] = array[n - 1 - i];       
        array[n - 1 - i] = temp;           
    }
}
