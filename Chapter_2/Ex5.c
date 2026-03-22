#include <stdio.h>

float years;

int main(void){
    printf("Input the number of years: ");
    scanf("%f", &years);
    printf("This is %f seconds\n", years * 3.156e7);
    return 0;
}
