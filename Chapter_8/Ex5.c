#include <stdio.h>

void larger_of(double *, double *);

int main (void){
    double a,b;
    printf("Enter two number (or q for quit):");
    while (scanf("%lf %lf", &a, &b) == 2) {
        larger_of(&a, &b);
        printf("Enter new two number (or q for quit):");
    }
    printf("Goodbye!\n");
    return 0;

}

void larger_of(double *x, double *y){

    double buffer;
    double max = (*x > *y) ? *x : *y;
    *x = *y = buffer;

    printf("Bigest number %g %g!!!", *x, *y);
    putchar('\n');
}
