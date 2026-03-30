#include <stdio.h>

int main (void){

    int min_input,max_input;
    int i;

    printf("Enter min number:");
    scanf("%d", &min_input);
    printf("Enter max number:");
    scanf("%d", &max_input);
    printf("Number  Square  Cube\n");
    for(i = min_input; i <= max_input; i++){
        printf("%3d %7d %7d", i, i*i, i*i*i);
        printf("\n");
    }
    return 0;
}
