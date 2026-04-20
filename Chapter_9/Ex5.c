#include <stdio.h>

double diff(double array[], int n);

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
    double difference = diff(arr_numb, size);
    printf("Difference = %g\n", difference);
    return 0;   
}

double diff(double array[], int n){
    
    double low = array[0];
    double high = array[0];
    
    for (int i = 1; i < n; i ++){
        if (array[i] >high){
            high = array[i];
        }
        if (array[i] < low){
            low = array[i];
        }
    }

    return high - low;

}
