#include <stdio.h>
int main(void){
    char name[20], surname[20];
    printf("Введите ваше имя: ");
    scanf("%s", name);
    printf("Введите вашу фамилию: ");
    scanf("%s", surname);
    printf("Ваше фамилия и имя: %s %s\n", surname, name);
    return 0;
}
