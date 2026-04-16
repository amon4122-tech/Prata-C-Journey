#include <stdio.h>

void sort_numbers(double *, double *, double *);

int main (void){
    double a,b,c;
    printf("Enter three number (or q for quit):");
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        sort_numbers(&a, &b, &c);
        printf("Enter new three number (or q for quit):");
    }
    printf("Goodbye!\n");
    return 0;

}

void sort_numbers(double *x, double *y, double *z) {
    double temp;

    if (*x > *y) { 
        temp = *x; 
        *x = *y; 
        *y = temp; 
    }
    if (*x > *z) { 
        temp = *x; 
        *x = *z; 
        *z = temp; 
    }
    if (*y > *z) { 
        temp = *y; 
        *y = *z; 
        *z = temp; 
    }

    printf("Sorted numbers: %g %g %g!!!\n", *x, *y, *z);
}
