#include <stdio.h>

double calc_float(double first, double second);

int main(void){
    double first, second;
    printf("Enter two numbers with dot (or q for exit):");
    while (scanf("%lf %lf", &first, &second) == 2) {
        if (first == 0 || second == 0){
            printf("Enter non-zero number:");
            continue;
        }
        printf("Result = %lf", calc_float(first, second));
        printf("\n");
        printf("Enter next two numbers with dot (or q for exit):");
    }
    return 0;
}

double calc_float (double first, double second){
    double result = (first - second) / (first*second);
    return result;
}
