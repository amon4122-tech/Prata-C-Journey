#include <stdio.h>

int main(void) {
    char target;
    printf("Enter char: ");
    scanf("%c", &target);

    int total_rows = target - 'A' + 1; 

    for (int i = 0; i < total_rows; i++) {
        
        for (int sp = 0; sp < (total_rows - 1 - i); sp++) {
            printf(" ");
        }

        for (int up = 0; up <= i; up++) {
            printf("%c", 'A' + up);
        }

        for (int down = i - 1; down >= 0; down--) {
            printf("%c", 'A' + down);
        }
        printf("\n"); 
    }

    return 0;
}
