#include <stdio.h>

int main (void){
    int row, col;
    char ch = 'A';

    for (row = 1; row <= 6; row++) {
        for(col = 1; col<=row; col++){
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
