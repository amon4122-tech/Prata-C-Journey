#include <stdio.h>

void copy_arr(double target[], const double source[], int n);


int main (void){
    double source[7] = {1.1,2.2, 3.3,4.4,5.5,6.6,7.7};
    double target[3];

    for (int i = 0; i < 7; i++) {
        printf("%g ",source[i]);
    }
    putchar('\n');

    copy_arr(target, &source[2], 3);
    
    for (int i = 0; i < 3; i++) {
        printf("%g ",target[i]);
    }
    putchar('\n');

    return 0;
}

void copy_arr(double target[], const double source[], int n) {
    for (int i = 0; i < n; i++) {
        target[i] = source[i];
    }
}

