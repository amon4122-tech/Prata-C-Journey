#include <stdio.h>
int main(void){
    
    printf("Введите значение в чашках: ");
    float cups, pints, tablespoons, teaspoons, ounces;

    scanf("%f", &cups);

    pints = cups / 2.0;             
    ounces = cups * 8.0;             
    tablespoons = cups * 16.0;      
    teaspoons = tablespoons * 3.0;

    printf("Это %f пинт\n", pints);
    printf("Это %f унций\n", ounces);
    printf("Это %f столовых ложек\n", tablespoons);
    printf("Это %f чайных ложек\n", teaspoons);
    return 0;
}
