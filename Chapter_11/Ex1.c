#include <stdio.h>
#include <stdlib.h>
void critic(int *n);
int main(void){
    int units = 0;
    printf("How many pounds to a firkin of butter?\n");
    if (scanf("%d", &units) != 1){
        printf("Need enter an integer number!\n");
        exit(EXIT_FAILURE);
    }
    while (units != 56) {
        critic(&units);
    }
    printf("You know!");
    
    return 0;
}

void critic(int * n) {
    
    printf("You don't get it. Try again!\n");
    while (scanf("%d", n) != 1) {
        while (getchar() != '\n'); 
        printf("Please enter an integer: ");
    }
}
