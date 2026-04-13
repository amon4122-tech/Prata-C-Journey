#include <stdio.h>

void chline(char ch, int i, int j);

int main(void) {
    char symbol;
    int i, j;
    printf("Enter symbol and coordinates i j (q for exit): ");
    while (scanf(" %c %d %d", &symbol, &i, &j) == 3) {
        chline(symbol, i, j); 
        printf("Enter next data: ");
    }

    printf("Program finished.\n");
    return 0;
}

void chline(char ch, int i, int j) {
    for (int col = 1; col <= j; col++) {
        if (col < i)
            putchar(' '); 
        else
            putchar(ch);
    }
    putchar('\n'); 
}
