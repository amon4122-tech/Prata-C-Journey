#include <stdio.h>

int max(double array[], int n);

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
    int max_index = max(arr_numb, size);
    printf("The index of the largest number = %d\n", max_index);
    return 0;
}

int max(double array[], int n){
    double result;
    int index;
    result = array[0];
    index = 0;
    for (int i = 1; i < n; i ++){
        if (array[i] >result){
            result = array[i];
            index = i;
        }
    }
    return index;
}
