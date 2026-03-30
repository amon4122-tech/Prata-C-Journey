#include <stdio.h>

int main (void){
    int row;
    char ch;
    for (row = 0; row <= 5; row++) {
        for(ch = 'F';ch >=('F' - row);ch--){
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
