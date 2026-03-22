#include <stdio.h>
int main(void){
    printf("Введите скорость загрузки в Мбит/с: ");
    float speed;
    scanf("%f", &speed);
    printf("Введите размер файла в МБ: ");
    float size;
    scanf("%f", &size);
    float time = (size * 8 )/ speed;
    printf("Время загрузки файла: %.2f секунд\n", time);
    return 0;
}
