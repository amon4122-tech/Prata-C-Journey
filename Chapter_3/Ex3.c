#include <stdio.h>
int main(void){
    printf("Введите число с плавающей точкой: ");
    float number;
    scanf("%f", &number);
    printf("Запись с фиксированной запятой: %.1f\n", number);
    printf("Экспоненциальная форма записи: %.1e\n", number);
    printf("Запись с фиксированной запятой, 3 знака после запятой: %3.3f\n", number);
    printf("Экспоненциальная форма записи, 3 знака после запятой: %3.3E\n", number);
    return 0;
}
