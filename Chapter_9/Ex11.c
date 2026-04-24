#include <stdio.h>

void mult_vla(int n, int m, int array[n][m]);
void print_vla(int n, int m, int array[n][m]);

int main(void){
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

    printf("Enter number for array:");
    int array[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &array[i][j])!=1) {
                printf("Number should be a single and integer!");
                return -1;  
            }
        }
    }

    print_vla(rows, cols, array);
    putchar('\n');
    mult_vla(rows, cols, array);
    print_vla(rows, cols, array);

    return 0;
}


void mult_vla(int n, int m, int array[n][m]){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = array[i][j] * 2;
        }
    }
}

void print_vla(int n, int m, int array[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ",array[i][j]);
        }
        putchar('\n');
    }
}
