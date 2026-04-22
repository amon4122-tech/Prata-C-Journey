#include <stdio.h>
#define ROWS 2
#define COLS 5

void copy_arr(double ar1[], double ar2[], int n);

int main (void){

double array1 [2][5] = {{1.0, 2.0, 3.0, 4.0, 5.0},{6.0, 7.0,8.0,9.0,0.0}};
double array2 [2][5]; 

for (int i = 0; i < ROWS; i++) {
    copy_arr(array2[i], array1[i], COLS);
}
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%g ",array1[i][j]);
        }
    }
    putchar('\n');

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%g ",array2[i][j]);
        }
    }
    putchar('\n');

    return 0;
}

void copy_arr(double ar1[], double ar2[], int n){
    int i;
    for (i = 0; i < n; i++) {
        ar1[i] = ar2[i];
    }
}
