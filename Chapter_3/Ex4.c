#include <stdio.h>

int main(void) {
    float inches;
    char name[20];

    printf("Input your height in inches: ");
    scanf("%f", &inches);
    printf("Input your name: ");
    scanf("%s", name);

    float feet = inches / 12.0;

    printf("%s, your height in feet: %.2f\n", name, feet);

    return 0;
}
