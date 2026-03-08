#include <stdio.h>

float centimeters;

int main(void){
    printf("Введите значение в сантиметрах: ");
    scanf("%f", &centimeters);
    printf("Это %f дюймов\n", centimeters * 0.3937);
    return 0;
}
