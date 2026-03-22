#include <stdio.h>

float number;

int main(void){
    printf("Input the floating-point number: ");
    scanf("%f", &number);
    printf("Fixed-point notation: %f\n", number);
    printf("Exponential notation: %e\n", number);
    printf("Binary-exponential representation: %a\n", number);
    return 0;
}
