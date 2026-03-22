#include <stdio.h>
int main(void){
    printf("Введите ваш рост в дюймах: ");
    float inches;
    scanf("%f", &inches);
    printf("Введите ваше имя: ");
    char name[20];
    scanf("%s", name);
    printf("%s, ваш рост в футах: %.2f\n", name, inches * 0.0833333);
    return 0;
}
