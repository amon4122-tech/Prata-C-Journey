#include <stdio.h>
#define SM_PER_INCH 0.393   
#define INCH_PER_FOOT 12 

int main(void)
{
    float height_sm;
    printf("Enter height in centimeter (<= 0 for exit programm): ");
    scanf("%f", &height_sm);
    while (height_sm >= 0) {
        float height_inch = height_sm * SM_PER_INCH;
        int feet = (int)(height_inch / INCH_PER_FOOT);
        float result_inch = height_inch - feet * INCH_PER_FOOT;
        printf("%.1f cm is %d feet %.1f inches\n", height_sm, feet, result_inch);
        printf("Enter height in centimeter (<= 0 for exit programm): ");
        scanf("%f", &height_sm);
    }
    return 0;
}
