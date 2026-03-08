#include <stdio.h>

int main(void){
    float number;
    printf("Введите количество лет: ");
    scanf("%f", &years);
    printf("Это %f секунд\n", years * 3.156e7);
    return 0;
}
