#include <stdio.h>

float years;

int main(void){
    printf("Введите количество лет: ");
    scanf("%f", &years);
    printf("Это %f секунд\n", years * 3.156e7);
    return 0;
}
