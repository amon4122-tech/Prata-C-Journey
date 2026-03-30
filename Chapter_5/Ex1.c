#include <stdio.h>
#define SIZE 26

int main (void){
    
    char alphabet[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        alphabet[i] = 'A' + i;
    }
    printf("|");
    for (i = 0; i < SIZE; i++){
        printf("%c|", alphabet[i]);
    }
    printf("\n");
    return 0;
}
