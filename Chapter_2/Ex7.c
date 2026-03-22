#include <stdio.h>

float centimeters;

int main(void){
    printf("Input the value in centimeters: ");
    scanf("%f", &centimeters);
    printf("This is %f inches\n", centimeters * 0.3937);
    return 0;
}
