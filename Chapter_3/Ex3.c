#include <stdio.h>
int main(void){
    printf("Input a floating-point number: ");
    float number;
    scanf("%f", &number);
    printf("Fixed-point notation: %.1f\n", number);
    printf("Exponential notation: %.1e\n", number);
    printf("Fixed-point notation, 3 decimal places: %+3.3f\n", number);
    printf("Exponential notation, 3 decimal places: %3.3E\n", number);
    return 0;
}
