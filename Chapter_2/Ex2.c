#include <stdio.h>

int code;

int main(void){
    printf("Введите значение кода ASCII: ");
    scanf("%d", &code);
    printf("Это символ %c\n", code);
    return 0;
}
