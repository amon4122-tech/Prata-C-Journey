#include <stdio.h>

int main (void){
    double first, second;
    printf("Enter two numbers with dot (or q for exit):");
    while (scanf("%lf %lf", &first, &second) == 2) {
        double result = (first - second)/(first*second);
        printf("Result = %lf",result);
        printf("\n");
        printf("Enter next two numbers with dot (or q for exit):");
    }
    
    return 0;
}
