#include <stdio.h>

int main (void){
    double first, second;
    printf("Enter first and second number with dot:");
    while (scanf("%lf %lf", &first, &second) == 2) {
        double result = (first - second)/(first*second);
        printf("Result = %lf",result);
        printf("\n");
        printf("Enter next two numbers with dot:");
    }
    
    return 0;
}
