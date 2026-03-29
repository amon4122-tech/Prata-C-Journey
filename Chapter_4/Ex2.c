#include <stdio.h>
int main(void){
    int user_input;
    printf("Enter a number:");
    scanf("%d", &user_input);
    int last_number = user_input + 10;
    for (int i = user_input; i<= last_number; i++){
        printf("%d,", i);

    }
    printf("\n");
    printf("It`s all!\n");
    return 0;
}
