#include <stdio.h>

int main (void){
    int first_operand, second_operand;
    printf("This program calculates the result of division modulo.\n");
    printf("Enter the number, that will be the second operand:");
    scanf("%d",&second_operand); 
    while (second_operand <= 0) {
        printf("Wrong number! Pls enter another number (>0):\n");
        printf("Enter the number, that will be the second operand:");
        scanf("%d",&second_operand);
    }
    printf("\n");
    printf("Enter the number, that will be the first operand:");
    scanf("%d",&first_operand); 
    while (first_operand>0) {
        int result_div = first_operand % second_operand;
        printf("%d %% %d equal %d\n", first_operand, second_operand, result_div);
        printf("Enter next number, that will be the first operand:");
        scanf("%d",&first_operand);
    }
    printf("Done!\n");
    return 0;
}
