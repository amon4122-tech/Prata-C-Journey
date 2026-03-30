#include <stdio.h>

int main (void){
    int row,chars;
    for (row = 5; row >= 0; row--) {
        for(chars = row; chars <= 5; chars++){
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
