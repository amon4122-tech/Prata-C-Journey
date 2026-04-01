#include <stdio.h>

int main(void){
    int limit;
    printf("Enter limits (or 0 to quit): ");
    while (scanf("%d", &limit) == 1 && limit > 0) {
        double sum1 = 0.0;
        double sum2 = 0.0;
        double sign = 1.0; 

        for (int i = 1; i <= limit; i++) {
            sum1 += 1.0/i; // Для первого ряда просто прибавляем 1.0/i
            sum2 += (1.0/i * sign);// Для второго ряда прибавляем (1.0/i * sign)
            sign = -sign;/// Не забываем менять sign!
            
        }
    printf("Result 1: %f\n", sum1);
    printf("Result 2: %f\n", sum2);
    printf("Next limit: ");
}
    
    return 0;
}
