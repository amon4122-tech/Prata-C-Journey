#include <stdio.h>

void sort_number(double *, double *, double * );

int main (void){
    double a,b,c;
    printf( "Enter number for sort:");
    while(scanf("%lf %lf %lf", &a, &b, &c)==3){
        sort_number(&a, &b, &c);
        printf("Sorted number = %g %g %g", a,b,c);
    }
}

void sort_number(double *x, double *y, double *z){
    double temp;
    if (*x > *y){temp = *x; *x = *y; *y = temp; }
    if (*x > *z){temp = *z; *x = *z; *z = temp; }
    if (*y > *z){temp = *z; *z = *y; *y = temp; }
}
