#include <stdio.h>

void sum_vla(int n, double target[n], const double source2[n], const double source1[n]);
void print_vla(int n, const double array[n]);

int main (void){
    int size;
    printf("Enter number of size:");
    if (scanf("%d", &size)!=1) {
        printf("Number should be a single and integer!");
        return -1;
    }

    double array1[size];
    double array2[size];
    double array3[size];

    printf("Enter number for first array:");
    for (int i = 0; i < size; i++) {
        scanf("%lf", &array1[i]);
        
    }
    putchar('\n');
    
    printf("Enter number for second array:");
    for (int i = 0; i < size; i++) {
        scanf("%lf", &array2[i]);
    }
    putchar('\n');

    sum_vla(size, array3, array2, array1);
    print_vla(size, array1);
    print_vla(size, array2);
    print_vla(size, array3);

    return 0;

}

void sum_vla(int n, double target[n], const double source2[n], const double source1[n]){
    for (int i = 0; i < n; i++) {
        target[i] = source1[i] + source2[i];
    }
}

void print_vla(int n, const double array[n]) {
    for (int i = 0; i < n; i++) {
        printf("%g ",array[i]);
    }
    putchar('\n');
}
