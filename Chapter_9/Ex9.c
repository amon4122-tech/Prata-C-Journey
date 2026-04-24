#include <stdio.h>

void copy_vla(int n, int m, double target[n][m], const double source[n][m]);
void print_vla(int n, int m, const double array[n][m]);

int main (void){
    int rows, cols;
    printf("Enter number of rows:");
    if (scanf("%d", &rows)!=1) {
        printf("Number should be a single and integer!");
        return -1;
    }

    printf("Enter number of cols:");
    if (scanf("%d", &cols)!=1) {
        printf("Number should be a single and integer!");
        return -1;
    }

    double array1[rows][cols];
    double array2[rows][cols];

    printf("Enter number for first array:");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%lf", &array1[i][j]);
        }
    }
    copy_vla(rows, cols, array2, array1);
    print_vla(rows, cols, array1);
    print_vla(rows, cols, array2);

    return 0;

}

void copy_vla(int n, int m, double target[n][m], const double source[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            target[i][j] = source[i][j];
        }
    }
}

void print_vla(int n, int m, const double array[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%g ",array[i][j]);
        }
        putchar('\n');
    }
}
