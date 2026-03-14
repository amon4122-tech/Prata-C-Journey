#include <stdio.h>
int main(void){
    char name[20], surname[20];
    printf("Введите ваше имя: ");
    scanf("%s", name);
    printf("Введите вашу фамилию: ");
    scanf("%s", surname);
    printf("Ваше имя и фамилия: %s %s\n", name, surname);
    return 0;
}
