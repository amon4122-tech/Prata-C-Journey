#include <stdio.h>

int main(void) {
    float inches;
    char name[20];

    printf("Введите ваш рост в дюймах: ");
    scanf("%f", &inches);
    printf("Введите ваше имя: ");
    scanf("%s", name);

    float feet = inches / 12.0;

    printf("%s, ваш рост в футах: %.2f\n", name, feet);

    return 0;
}
