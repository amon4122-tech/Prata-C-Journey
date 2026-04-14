#include <stdio.h>

double harmonic (double, double);

int main (void){
    double a,b;
    double harmonic_num;
    printf("Enter two numbers for calculate of harmonic number:");
    while (scanf("%lf %lf",&a, &b) == 2) {
        harmonic_num = harmonic(a, b);
        printf("Harmonic number of %g and %g = %.3lf", a, b, harmonic_num);
        putchar('\n');
        printf("Enter next two numbers for calculate of harmonic number:\n");
    }
}

double harmonic (double i, double j){
    if (i + j == 0) {
        printf("Error: sum of numbers must not be equal to 0! ");
        return 0;
    }
    double result = (2.0 * i * j) / (i +j);
    return result; 
}
