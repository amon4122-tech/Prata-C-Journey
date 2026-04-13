#include <stdio.h>

void matrix(char ch, int i, int j);

int main(void) {
    char symbol;
    int i, j;
    printf("Enter symbol and dimensions i j (q for exit): ");
    while (scanf(" %c %d %d", &symbol, &i, &j) == 3) {
        matrix(symbol, i, j); 
        printf("Enter next data: ");
    }

    printf("Program finished.\n");
    return 0;
}

void matrix(char ch, int i, int j) {
    for (int row = 1; row <= i; row++) {
        for (int col = 1; col <= j; col++) {
            putchar(ch);
        }
        putchar('\n');
    }
}
