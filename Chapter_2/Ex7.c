#include <stdio.h>

int main(void){
    float centimeters;
    printf("Введите значение в сантиметрах: ");
    scanf("%f", &centimeters);
    printf("Это %f дюймов\n", centimeters * 0.3937);
    return 0;
}
