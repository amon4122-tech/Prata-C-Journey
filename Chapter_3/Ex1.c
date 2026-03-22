#include <stdio.h>
int main(void){
    char name[20], surname[20];
    printf("Input your name: ");
    scanf("%s", name);
    printf("Input your surname: ");
    scanf("%s", surname);
    printf("Your surname and name: %s %s\n", surname, name);
    return 0;
}
