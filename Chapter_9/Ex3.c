#include <stdio.h>

int max(int array[], int n);

int main(void){
    int size;
    printf("Enter the size of the array:");
    if (scanf("%d", &size)!=1) {
        printf("The size must be an integer!\n");
        return -1;
    }
    printf("The size of the array = %d\n", size);
    int arr_numb[size];
    printf("Enter the data of the array:");
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr_numb[i]);
    }
    int max_number = max(arr_numb, size);
    printf("The largest number in the array = %d\n", max_number);
    return 0;
}

int max(int array[], int n){
    int result;
    result = array[0];
    for (int i = 1; i < n; i ++){
        if (array[i] >result){
            result = array[i];
        }
    }
    return result;
}
